#include<stdio.h>
int d[1002];

int main(){
    d[1]=1;
    d[2]=2;
    for(int i=3;i<1001;i++){
        d[i]=(d[i-1]+d[i-2])%10007;
    }
    int i;
    scanf("%d",&i);
    printf("%d",d[i]);
}
