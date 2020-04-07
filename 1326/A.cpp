#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<"-1"<<endl;
            continue;
        }
        for(int i=0;i<n-2;i++)
            cout<<"2";
        if((2*(n-2)+2)%3==0)
            cout<<"43"<<endl;
        else    cout<<"23"<<endl;
    }
}