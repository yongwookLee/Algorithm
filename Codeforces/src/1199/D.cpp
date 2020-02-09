#include<stdio.h>
int a[200001];
int renew[200001];
int payoff[200001];
int maxpay[200001];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)    scanf("%d",a+i);
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        int mode;
        scanf("%d",&mode);
        if(mode==1){
            int t1,t2;
            scanf("%d %d",&t1,&t2);
            a[t1-1]=t2;
            renew[t1-1]=i;
        }
        else{
            int t1;
            scanf("%d",&t1);
            payoff[i]=t1;
        }
    }
    maxpay[q-1]=payoff[q-1];
    for(int i=q-2;i>=0;i--){
        if(payoff[i]>maxpay[i+1]){
            maxpay[i]=payoff[i];
        }
        else    maxpay[i]=maxpay[i+1];
    }
    for(int i=0;i<n;i++){
        if(maxpay[renew[i]]>a[i])
            a[i]=maxpay[renew[i]];
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
