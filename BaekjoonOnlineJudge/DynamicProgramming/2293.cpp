#include<stdio.h>
#include<algorithm>

int value[101];
int cnt[10001];


int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",value+i);
    for(int i=0;i<=k;i++){
        if(i%value[0]==0)    cnt[i]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<=k;j++){
            if(j>=value[i])    cnt[j]=cnt[j]+cnt[j-value[i]];
        }
    }
    printf("%d",cnt[k]);
}
