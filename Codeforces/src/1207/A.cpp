#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    scanf("%d",&t);
    for(int q=0;q<t;q++){
        int b,p,f,h,c;
        scanf("%d %d %d %d %d",&b,&p,&f,&h,&c);
        int ans=0;
        if(h<=c){
            if(f*2<=b){
                ans+=f*c;
                b-=f*2;
            }
            else{
                printf("%d\n",(b/2)*c);
                continue;
            }
            if(p*2<=b){
                ans+=p*h;
            }
            else    ans+=(b/2)*h;
            printf("%d\n",ans);
        }
        else{
            if(p*2<=b){
                ans+=p*h;
                b-=p*2;
            }
            else{
                printf("%d\n",(b/2)*h);
                continue;
            }
            if(f*2<=b){
                ans+=f*c;
            }
            else    ans+=(b/2)*c;
            printf("%d\n",ans);
        }
    }

}
