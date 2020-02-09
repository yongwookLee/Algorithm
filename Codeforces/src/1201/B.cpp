#include <stdio.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <functional>
using namespace std;
int a[100001];
int main(){
    int n;
    int ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    sort(a,a+n);
    int t=a[n-1];
    for(int i=0;i<n-1;i++){
        t-=a[i];
        if(t<0)break;
    }
    for(int i=0;i<n;i++){
        ans+=a[i]%2;
    }
    if(t>0) printf("NO");
    else{
        if(ans%2)  printf("NO");
        else    printf("YES");
    }
}
