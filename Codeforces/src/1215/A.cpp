#include<bits/stdc++.h>
using namespace std;

int main(){
    int a1,a2,k1,k2,n;
    int maxn=0,minn=0;
    scanf("%d %d %d %d %d",&a1,&a2,&k1,&k2,&n);
    if(k1<k2){
        if(a1*k1<=n)    maxn=a1+(n-a1*k1)/k2;
        else    maxn=n/k1;
    }
    else{
        if(a2*k2<=n)    maxn=a2+(n-a2*k2)/k1;
        else    maxn=n/k2;
    }
    minn=(a1+a2)-(a1*k1+a2*k2)+n;
    if(minn<0)  minn=0;
    printf("%d %d",minn, maxn);
}
