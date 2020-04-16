#include<bits/stdc++.h>
#define MP make_pair
#define F first
#define S second
using namespace std;
typedef pair<int,int> pii;
vector<pii> v;
int d[300005];
int under[300005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N,S;
    cin>>N>>S;
    int t1,t2;
    for(int i=0;i<N;i++){
        cin>>t1>>t2;
        v.push_back(MP(t1,t2));
    }
    sort(v.begin(),v.end());
    memset(under,-1,sizeof(under));
    for(int i=1;i<N;i++){
        under[i]=upper_bound(v.begin(),v.end(),MP(v[i].F-S,1001))-v.begin()-1;
    }
    d[0]=v[0].S;
    for(int i=1;i<N;i++){
        if(under[i]==-1){
            d[i]=max(v[i].S,d[i-1]);
        }
        else{
            d[i]=max(d[under[i]]+v[i].S,d[i-1]);
        }
    }
    cout<<d[N-1];
}
