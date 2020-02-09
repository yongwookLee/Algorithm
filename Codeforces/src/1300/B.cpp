#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,q,t,n,m;
    cin>>q;
    while(q--){
        scanf("%d",&n);
        int a[200005];
        for(int i=0;i<2*n;i++)
            scanf("%d",a+i);
        sort(a,a+2*n);
        printf("%d\n",a[n]-a[n-1]);
    }
}
