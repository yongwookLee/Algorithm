#include<bits/stdc++.h>
using namespace std;;
int a[1005];
int dpi[1005];
int dpd[1005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>a[i];
    for(int i=0;i<N;i++){
        if(dpi[i]==0)   dpi[i]=1;
        for(int j=0;j<i;j++)
            if(a[j]<a[i])
                if(dpi[i]<dpi[j]+1)
                    dpi[i]=dpi[j]+1;
    }
    for(int i=N-1;i>=0;i--){
        if(dpd[i]==0)   dpd[i]=1;
        for(int j=N-1;j>i;j--)
            if(a[j]<a[i])
                if(dpd[i]<dpd[j]+1)
                    dpd[i]=dpd[j]+1;
    }
    int maxlen=0;
    for(int i=0;i<N;i++)
        if(maxlen<dpi[i]+dpd[i]-1)
            maxlen=dpi[i]+dpd[i]-1;
    cout<<maxlen;
}
