#include<stdio.h>

int c[11];
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)    scanf("%d",c+i);
    int sum=0;
    for(int i=n-1;i>=0;i--){
        sum+=(k/c[i]);
        k-=(k/c[i])*c[i];
    }
    printf("%d\n",sum);
}
