#include <bits/stdc++.h>

using namespace std;
int b[200005];
int a[200005];
int main()
{
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>b[i];
    a[0]=b[0];
    int maxa=a[0];
    for(int i=1;i<n;i++){
        a[i]=b[i]+maxa;
        if(a[i]>maxa)   maxa=a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
