#include<bits/stdc++.h>
using namespace std;
int a[400000];
int main(){
    int q,x;
    cin>>q>>x;
    int mex=0;
    int cnt=0;
    for(int i=0;i<q;i++){
        int n;
        scanf("%d",&n);
        a[n%x]++;
        for(;;mex++){
            if(mex==x){
                mex=0;
                cnt++;
            }
            if(a[mex]){
                a[mex]--;
            }
            else    break;
        }
        printf("%d\n",mex+cnt*x);
    }
}
