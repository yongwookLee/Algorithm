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
    ll n;
    cin>>n;
    ll a[n+5];
    a[0]=0;
    FOR(i,2,n){
        cout<<"? "<<1<<' '<<i<<endl;
        cin>>a[i];
    }
    cout<<"? "<<2<<' '<<n<<endl;
    cin>>a[1];
    a[1]=a[n]-a[1];
    cout<<"! ";
    FOR(i,1,n) cout<<a[i]-a[i-1]<<' ';
    cout<<endl;
    return 0;
}