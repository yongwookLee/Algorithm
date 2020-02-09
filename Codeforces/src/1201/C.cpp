#include <stdio.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <functional>
using namespace std;
int a[200001];
int main(){
    long long n,k;
    scanf("%lld %lld",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    sort(a,a+n);
    int i;
    for(i=n/2;i<n-1;i++){
        if((long long)(a[i+1]-a[i])*(i-n/2+1)<=k)
            k-=(long long)(a[i+1]-a[i])*(i-n/2+1);
        else break;
    }
    if(k>0) a[i]+=k/(i-n/2+1);
    printf("%d",a[i]);
}
