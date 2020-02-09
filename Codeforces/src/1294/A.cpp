#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,ans=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c,n;
        scanf("%d %d %d %d",&a,&b,&c,&n);
        if((a+b+c+n)%3==0){
            int t=(a+b+c+n)/3;
            if(a<=t)if(b<=t)if(c<=t){
                printf("YES\n");
                continue;
            }
        }
        printf("NO\n");
    }
}
