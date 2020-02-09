#include <bits/stdc++.h>
using namespace std;
int res(int x,int d){
    return x+ceil((double)d/(x+1));
}
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n,d;
        cin>>n>>d;
        if(d<=n)    printf("YES\n");
        else{
            int f=0;
            for(int i=1;i<n;i++){
                if(res(i,d)<=n){
                    f=1;break;
                }
                if(i>1&&res(i-1,d)<res(i,d)){
                    break;
                }
            }
            if(f)   printf("YES\n");
            else    printf("NO\n");
        }
    }
}
