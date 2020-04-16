#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[105][105];
ll d[105][105];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            cin>>a[i][j];
    d[N-1][N-1]=1;
    for(int i=N-1;i>=0;i--){
        for(int j=N-1;j>=0;j--){
            if(i>=1)
            for(int k=1;i-k>=0;k++){
                if(a[i-k][j]==k)
                    d[i-k][j]+=d[i][j];
            }
            if(j>=1)
            for(int k=1;j-k>=0;k++){
                if(a[i][j-k]==k)
                    d[i][j-k]+=d[i][j];
            }
        }
    }
    cout<<d[0][0]<<endl;

}
