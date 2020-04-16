#include<stdio.h>
int d[41][2];


int main(){
    d[0][0]=1;
    d[0][1]=0;
    d[1][0]=0;
    d[1][1]=1;
    for(int i=2;i<=40;i++){
        d[i][0]=d[i-1][0]+d[i-2][0];
        d[i][1]=d[i-1][1]+d[i-2][1];
    }
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int input;
        scanf("%d",&input);
        printf("%d %d\n",d[input][0],d[input][1]);
    }
}
