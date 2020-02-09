#include<stdio.h>
int d[200001];
int cnt[200001];
int main(){
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        int n;
        scanf("%d",&n);
        int maxd=0;
        for(int i=0;i<n;i++){
            int tmp;
            scanf("%d",&tmp);
            if(tmp>maxd)    maxd=tmp;
            d[tmp]+=1;
        }
        int maxn=0;
        for(int i=0;i<=maxd;i++){
            cnt[d[i]]+=1;
            if(d[i]>maxn)   maxn=d[i];
            d[i]=0;
        }
        int sum=0;
        for(int i=maxn;i>0;i--){
            if(cnt[i]>=1){
                sum+=i;
                cnt[i-1]+=cnt[i]-1;
            }
        }
        printf("%d\n",sum);
        for(int i=0;i<=maxn;i++){
            cnt[i]=0;
        }
    }

}
