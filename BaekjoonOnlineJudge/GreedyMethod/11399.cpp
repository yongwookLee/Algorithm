#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d",&tmp);
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i]*(n-i);
    }
    printf("%d",sum);
}
