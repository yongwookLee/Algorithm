#include<bits/stdc++.h>
#define FOR(i,a,b) for(ll i=a; i<=b; ++i)
#define ALL(x) x.begin(),x.end()
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vl=vector<ll>;
using vp=vector<pll>;
const ll INF=1e18;

int main(){
    ll n,k;
    cin>>n>>k;
    ll a[n+5],d[n+5];
    a[0]=0;
    FOR(i,1,n){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    FOR(i,1,n) cin>>d[i];
    ll ans=0;
    if(k==0){
        FOR(i,1,n){
            ans=max(ans,a[n]-a[i-1]-d[i]);
        }
        cout<<ans;
        return 0;
    }
    if(k==1){
        FOR(i,2,n){
            ans=max(ans,a[n]-a[i]+a[i-1]-d[1]);
        }
        FOR(i,2,n){
            ans=max(ans,max(0LL,a[i-1]-d[i-1])+max(0LL,a[n]-a[i-1]-d[i]));
            d[i]=min(d[i],d[i-1]);
        }
        cout<<ans;
        return 0;
    }
    FOR(i,1,n-1) ans=max(ans,a[n]-d[i]);
    ans=max(ans,a[n]-a[n-1]-d[n]);
    cout<<ans;
    return 0;
}