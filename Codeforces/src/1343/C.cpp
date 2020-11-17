#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum=0;
        int sign=1;
        ll maxp=0;
        ll maxn=-1e9-5;
        for(int i=0;i<n;i++){
            ll tmp;
            cin>>tmp;
            if(tmp<0){
                if(sign>0){
                    sign=-1;
                    sum+=maxp;
                    maxp=0;
                }
                if(maxn<tmp) maxn=tmp;
            }
            if(tmp>0){
                if(sign<0){
                    sign=1;
                    sum+=maxn;
                    maxn=-1e9-5;
                }
                if(maxp<tmp) maxp=tmp;
            }
            if(i==n-1){
                if(tmp<0)   sum+=maxn;
                if(tmp>0)   sum+=maxp;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
