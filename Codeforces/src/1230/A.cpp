#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
 
    int cnt=0,ans=0,sum=0;
    sum=a+b+c+d;
        if(a+b==c+d||a+c==b+d||a+d==b+c||a==b+c+d||b==a+c+d||c==b+a+d||d==b+c+a)  printf("YES");
        else    printf("NO");
    
}