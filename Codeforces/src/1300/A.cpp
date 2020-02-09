#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,q,t,n,m;
    cin>>q;
    while(q--){
        scanf("%d",&n);
        int a[110];
        for(int i=0;i<n;i++)
            scanf("%d",a+i);
        int sum=0,cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                a[i]++;
                cnt++;
            }
        }
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        if(sum) printf("%d\n",cnt);
        else    printf("%d\n",cnt+1);
    }
}
