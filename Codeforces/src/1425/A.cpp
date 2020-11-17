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
    ll n;
    cin>>n;
    ll cnt[2]={};
    bool t=1;
    while(n){
        switch(n&3){
            case 1:case 3:
                --n;
                ++cnt[t];
                break;
            case 0:
                if(n!=4){
                    --n;
                    ++cnt[t];
                    break;
                }
            case 2:
                n>>=1;
                cnt[t]+=n;
                break;
        }
        t=!t;
    }
    cout<<cnt[1];
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