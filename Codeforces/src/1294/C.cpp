#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,ans=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int a=0,b=0;
        for(int i=2;i<sqrt(n);i++){
            if(n%i==0){
                if(a){
                    b=i;
                    n/=b;
                    break;
                }
                else{
                    a=i;
                    n/=i;
                }
            }
        }
        if(b){
            printf("YES\n%d %d %d\n",a,b,n);
        }
        else    printf("NO\n");
    }
}
