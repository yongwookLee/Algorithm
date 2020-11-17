#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%4==0){
            cout<<"YES\n";
            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
            }
            for(int i=1;i<=n-3;i+=2){
                cout<<i<<" ";
            }
            cout<<n+n/2-1<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
