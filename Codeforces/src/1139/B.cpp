#include<stdio.h>

int a[200001];

int main(){
    int n;
    long long sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    sum+=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i]>=a[i+1]){
            if(a[i+1]<=1)   a[i]=0;
            else    a[i]=a[i+1]-1;
            sum+=a[i];
        }
        else    sum+=a[i];
    }
    printf("%lld",sum);
}
