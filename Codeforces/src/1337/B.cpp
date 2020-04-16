#include<bits/stdc++.h>
#define mp make_pair
#define f first
#define s second

using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
typedef pair<ll, ll> pll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll x,n,m;
        cin>>x>>n>>m;
        ll init=0;
        init += m*10;
        if(init>=20){
            for(int i=0;i<n;i++){
                init-=10;
                init*=2;
                init++;
                if(init>=x)break;
            }
        }
        if(init>=x){
            cout<<"YES\n";
        }
        else    cout<<"NO\n";
    }
}
