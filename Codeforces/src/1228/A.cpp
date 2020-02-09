#include<stdio.h>
int dist(int n){
    int a[10];
    for(int i=0;i<10;i++){
        a[i]=0;
    }
    while(n){
        if(a[n%10]) return 0;
        else{
            a[n%10]++;
            n/=10;
        }
    }
    return 1;
}
int main(){
    int l,r;
    scanf("%d %d",&l,&r);
    for(int i=l;i<=r;i++){
        if(dist(i)){
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
