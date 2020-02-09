#include<stdio.h>
int main(){
    int w,h;
    scanf("%d %d",&w,&h);
    int n=4;
    for(int i=1;i<w;i++){
        n*=2;
        n%=998244353;
    }
    for(int i=1;i<h;i++){
        n*=2;
        n%=998244353;
    }
    printf("%d",n);
}
