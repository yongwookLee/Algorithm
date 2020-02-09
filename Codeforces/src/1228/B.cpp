#include<stdio.h>
int cell[1005][1005];

int main(){
    int h,w;
    scanf("%d %d",&h,&w);
    for(int i=0;i<h;i++){
        int tmp;
        scanf("%d",&tmp);
        for(int j=0;j<tmp;j++){
            cell[i][j]=1;
        }
        cell[i][tmp]=-1;
    }
    int zero=0;
    for(int i=0;i<w;i++){
        int tmp;
        scanf("%d",&tmp);
        for(int j=0;j<tmp;j++){
            if(cell[j][i]==-1){
                zero=1;
            }
            else{
                cell[j][i]=1;
            }
        }
        if(cell[tmp][i]==1) zero=1;
        else    cell[tmp][i]=-1;
    }
    if(zero){
        printf("0");
        return 0;
    }
    int cnt=0;
    for(int i=0;i<h;i++)    for(int j=0;j<w;j++){
        if(cell[i][j]==0)   cnt++;
    }
    long long ans=1;
    for(int i=0;i<cnt;i++){
        ans*=2;
        if(ans>=1000000007)
            ans%=1000000007;
    }
    printf("%d",ans);
}
