#include<stdio.h>
int main(){
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        int n,k,a,b;
        scanf("%d %d %d %d",&k,&n,&a,&b);
        int r,q1,q2;
        if(((k-1)/b)<n) printf("-1\n");
        else{
            printf("%d\n",((k-n*b-1)/(a-b)>n)?n:(k-n*b-1)/(a-b));
        }
    }
}
