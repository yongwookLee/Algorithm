#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    if(m==1 || n==1){
        printf("1");
        return 0;
    }
    if(m==2){
        printf("%d",(n+1)/2<4?(n+1)/2:4);
        return 0;
    }
    if(n<=4){
        printf("%d",n);
        return 0;
    }
    if(n<=6){
        printf("4");
        return 0;
    }
    else{
        printf("%d",n-2);
    }

}
