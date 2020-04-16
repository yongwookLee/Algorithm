#include<bits/stdc++.h>
using namespace std;
vector<int> v[1000005];
int dp[1000005][2];

int f(int node,int prev,int status){
    if(dp[node][status]!=-1)    return dp[node][status];
    dp[node][status]=0;
    if(status==0){
        for(auto x : v[node])
            if(x!=prev)
                dp[node][status]+=f(x,node,1);
    }
    else{
        for(auto x : v[node])
            if(x!=prev){
                dp[node][status]+=min(f(x,node,0),f(x,node,1));
            }
        dp[node][status]++;
    }
    return dp[node][status];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin>>N;
    int a,b;
    for(int i=0;i<N-1;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(dp,-1,sizeof(dp));
    cout<<min(f(1,0,0),f(1,0,1));
}
