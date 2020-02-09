#include<bits/stdc++.h>
using namespace std;
int a[200001];
int main(){
    int n;
    scanf("%d",&n);
    long long tot=(long long)n*(n-1)/2+n;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<0)  a[i]=-1;
        else    a[i]=1;
    }

    long long p=0,ne=0;
    long long curp=0,curn=0;
    if(a[0]>0)  curp++,p++;
    else    curn++;
    for(int i=1;i<n;i++){
        if(a[i]>0){
            curp++;
            p+=curp;
        }
        else{
            int tmp;
            tmp=curp;
            curp=curn;
            curn=tmp;
            curn++;
            p+=curp;
        }
    }
    ne=tot-p;
    printf("%lld %lld",ne,p);
}
