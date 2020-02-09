#include<stdio.h>
#include<math.h>


int main(){
    int H,L;
    scanf("%d %d",&H,&L);
    double ans;
    ans+=(double)H/2;
    ans+=(double)L/2/H*L;
    printf("%.13lf",ans-H);
}
