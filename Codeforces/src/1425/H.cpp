#include<bits/stdc++.h>
#define FOR(i,a,b) for(ll i=a; i<=b; ++i)
#define ALL(x) x.begin(),x.end()
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define endl '\n'
using namespace std;
using ll=long long;
using pll=pair<ll,ll>;
using vl=vector<ll>;
using vp=vector<pll>;
const ll INF=1e18;

void tc(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    c+=b;
    d+=a;
    string y="Ya";
    string n="Tidak";
    if((a+b)&1){
        cout<<(d?y:n)<<' ';
        cout<<(c?y:n)<<' ';
        cout<<n<<' '<<n<<' ';
    }
    else{
        cout<<n<<' '<<n<<' ';
        cout<<(c?y:n)<<' ';
        cout<<(d?y:n)<<' ';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    FOR(i,1,t){
        // cout<<"Case #"<<i;
        // cout<<":";
        // cout<<endl;
        tc();
        cout<<endl;
    }
    return 0;
}