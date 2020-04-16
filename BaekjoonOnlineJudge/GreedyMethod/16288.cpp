#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int inS[150];
int out[150];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>out[i];
    for(int i=0;i<k;i++){
        int mini=0;
        for(int j=0;j<n;j++){
            if(!inS[j])
                if(mini<out[j]){
                    inS[j]=1;
                    mini=out[j];
                }
        }
    }
    for(int i=0;i<n;i++){
        if(!inS[i]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
