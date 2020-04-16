#include<stdio.h>
#include<algorithm>

int a[10001];
int main(){
    int n,ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    std::sort(a,a+n);
    int neg=0,pos=0,zero=0;

    for(int i=0;i<n;i++){
        if(a[i]>0)  pos++;
        else if(a[i]<0) neg++;
        else zero++;
    }
    if(pos%2==0){
        for(int i=0;i<pos;i+=2){
            if(a[n-2-i]==1) ans+=(a[n-1-i]+a[n-2-i]);
            else ans+=a[n-1-i]*a[n-2-i];
        }
    }
    else{
        for(int i=0;i<pos-1;i+=2){
            if(a[n-2-i]==1) ans+=(a[n-1-i]+a[n-2-i]);
            else ans+=a[n-1-i]*a[n-2-i];
        }
        ans+=a[n-pos];
    }
    if(neg%2==0){
        for(int i=0;i<neg;i+=2){
            ans+=a[i]*a[i+1];
        }
    }
    else{
        if(zero>=1){
            for(int i=0;i<neg-1;i+=2){
                ans+=a[i]*a[i+1];
            }
        }
        else{
            for(int i=0;i<neg-1;i+=2){
                ans+=a[i]*a[i+1];
            }
            ans+=a[neg-1];
        }
    }
    printf("%d",ans);
}
