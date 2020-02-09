#include <stdio.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <functional>
using namespace std;

char a[1000][1001];
int ans[1001];
int cnt[1001][50];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%s",a[i]);
    for(int i=0;i<m;i++)
        scanf("%d",ans+i);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cnt[j][a[i][j]-'A']++;
        }
    }
    for(int j=0;j<m;j++)
        sort(cnt[j],cnt[j]+50,greater<int>());
    int qe=0;
    for(int i=0;i<m;i++)
        qe+=(cnt[i][0]*ans[i]);
    printf("%d",qe);
}
