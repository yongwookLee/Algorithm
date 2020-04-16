#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> v;
int weight[1001];
int chu[1001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>chu[i];
    }
    sort(chu,chu+n);
    if(chu[0]!=1){
        cout<<1;return 0;
    }
    weight[0]=chu[0];
    chu[n]=2000000000;
    for(int i=0;i<n;i++){
        if(chu[i+1]<=weight[i]+1)
            weight[i+1]=chu[i+1]+weight[i];
        else{
            cout<<weight[i]+1;
            return 0;
        }
    }
}
