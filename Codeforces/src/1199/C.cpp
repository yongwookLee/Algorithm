#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int a[400001];
int b[400001];
int main(){
    int n,I;
    scanf("%d %d",&n,&I);
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    sort(a,a+n);
    int cnt=0,t=0;
    for(int i=0;i<n;i++){
        b[cnt]++;
        if(a[i]!=a[i+1]) cnt++;
    }
    t=cnt;
    int k=ceil(log2(cnt));
    if((double)n*k/8<=I)    {printf("0");return 0;}
    else{
        int ans1=0,ans2=0;
        for(;(double)n*k/8>I;){
            cnt--;k=ceil(log2(cnt));
        }
        int maxn=0;
        for(int i=0;i<cnt;i++){
            maxn+=b[i];
        }
        int tmp=maxn;
        for(int j=cnt;j<t;j++){
            tmp+=b[j];
            tmp-=b[j-cnt];
            if(tmp>maxn)    maxn=tmp;
        }
        printf("%d",n-maxn);return 0;
    }
}
