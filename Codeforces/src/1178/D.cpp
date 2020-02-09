#include<stdio.h>
int prime(int num){
    if (num <= 1) return 0;
    if (num % 2 == 0 && num > 2) return 0;
    for(int i = 3; i < num / 2; i+= 2){
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int sum=n;
    for(sum=n;sum<n*3/2;sum++){
        if(prime(sum))    break;
    }
    printf("%d\n",sum);
    for(int i=1;i<n;i++)    printf("%d %d\n",i,i+1);
    printf("%d %d\n",n,1);
    for(int i=1;i<=sum-n;i++){
        printf("%d %d\n",i,i+n/2);
    }
}
