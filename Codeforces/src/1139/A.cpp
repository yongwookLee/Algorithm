#include<stdio.h>
char a[65001];
int main(){
    int n,sum=0;
    scanf("%d",&n);
    scanf("%s",a);
    for(int i=1;i<=n;i++){
        if(int(a[i-1]-'0')%2==0){
            sum+=i;
        }
    }
    printf("%d",sum);
}
