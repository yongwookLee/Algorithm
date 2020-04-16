#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;v.push_back(t);
    }
    sort(v.begin(),v.end());
    int floor=0;int right=n;
    int left=0,cnt=0;
    while(left<right){
        if(right-left>v[right-1]-floor){
            floor++;
            for(;v[left]<=floor;left++);
        }
        else    right--;
        if(v[right-1]==floor){
            cnt++;break;
        }
        cnt++;
    }
    cout<<cnt;
}
