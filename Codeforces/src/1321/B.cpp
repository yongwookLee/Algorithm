#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
    ll a[200005];
    ll b[200005];
    ll c[600005];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%lld",b+i);
    }
    for(int i=0;i<n;i++){
        a[i]=b[i]-i+200000;
    }
    ll maxx=0;
    for(int i=0;i<n;i++){
        c[a[i]]+=b[i];
        if(c[a[i]]>maxx)    maxx=c[a[i]];
    }
    printf("%lld",maxx);

}
