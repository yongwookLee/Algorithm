#include<stdio.h>
#include<math.h>

int a[1001];
int main(){
    int n,l,r;
    scanf("%d %d %d",&n,&l,&r);
    for(int i=n-1;i>=0;i--){
        a[i]=(l-(n-i)>=0)?pow(2,l-(n-i)):1;
    }
    long long mins=0,maxs=0;
    for(int i=0;i<n;i++){
        mins+=a[i];
    }

    for(int i=0;i<n;i++){
        a[i]=(i<r)?pow(2,i):pow(2,r-1);
    }
    for(int i=0;i<n;i++){
        maxs+=a[i];
    }
    printf("%lld %lld",mins,maxs);

}
