#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v = vector<int>(n/2,0);
        vector<int> sv = vector<int>(n/2,0);
        vector<int> bv = vector<int>(n/2,0);
        for(int i=0;i<n/2;i++){
            int tmp;
            cin>>tmp;
            v[i]+=tmp;
            sv[i]=tmp;
            bv[i]=tmp;
        }
        for(int i=n/2-1;i>=0;i--){
            int tmp;
            cin>>tmp;
            v[i]+=tmp;
            if(sv[i]>tmp)   sv[i]=tmp;
            if(bv[i]<tmp)   bv[i]=tmp;
        }
        vector<int> line = vector<int>(2*k+5,0);
        for(int i=0;i<n/2;i++){
            int left_limit=v[i]-bv[i]+1;
            int right_limit=v[i]-sv[i]+k;
            if(left_limit>2){
                line[2]+=2;
                line[left_limit]-=1;
            }
            else line[2]+=1;
            line[v[i]]-=1;
            line[v[i]+1]+=1;
            line[right_limit+1]+=1;
        }
        int minsum=5000000,sum=0;
        for(int i=2;i<2*k+5;i++){
            sum+=line[i];
            if(minsum>sum)  minsum=sum;
        }
        cout<<minsum<<endl;
    }
    return 0;
}
