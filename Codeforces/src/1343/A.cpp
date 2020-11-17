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
        for(int k=3;k<=n;k=(k+1)*2-1){
            if(n%k==0){
                cout<<n/k<<endl;
                break;
            }
        }
    }
    return 0;
}
