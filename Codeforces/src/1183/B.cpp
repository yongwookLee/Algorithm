#include<stdio.h>
int main(){
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        int n,k;
        scanf("%d %d",&n,&k);
        int mini=100000000;
        int maxi=1;
        for(int i=0;i<n;i++){
            int tmp;
            scanf("%d",&tmp);
            if(mini>tmp)    mini=tmp;
            if(maxi<tmp)    maxi=tmp;
        }
        if(maxi-mini<=2*k){
            printf("%d\n",mini+k);
        }
        else printf("-1\n");
    }
}
