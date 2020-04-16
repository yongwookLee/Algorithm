#include<stdio.h>
int main(){
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    if(n>=m*2){
        k-=(n-m*2);
        n=m*2;
    }
    else{
        k-=n-(n/2*2)+m-(n/2);
        n=n/2*2;
        m=n/2;
    }
    while(k>0){
        n-=2;
        m--;
        k-=3;
    }
    printf("%d",m);
}