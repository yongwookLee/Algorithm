#include<stdio.h>
int largeInter(int a){
    int sum=0;
    for(int i=a;;sum=0,i++){
        int tmp=i;
        while(tmp){
            sum+=(tmp%10);
            tmp/=10;
        }
        if(sum%4==0)    return i;
    }
}

int main(){
    int a;
    scanf("%d",&a);
    printf("%d",largeInter(a));
}
