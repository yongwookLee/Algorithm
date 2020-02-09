#include<stdio.h>
int main(){
    int n,m,r;
    scanf("%d %d %d",&n,&m,&r);
    int minb=1001;
    int maxb=0;
    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d",&tmp);
        if(tmp<minb)    minb=tmp;
    }
    for(int i=0;i<m;i++){
        int tmp;
        scanf("%d",&tmp);
        if(tmp>maxb)    maxb=tmp;
    }
    int s=0;
    if(minb<maxb){
        s+=r/minb;
        r=r-s*minb;
        r+=s*maxb;
    }
    printf("%d",r);
}
