#include<bits/stdc++.h>
using namespace std;
char seq[200001];
int height[200001];
int main(){
    int t;
    scanf("%d",&t);
    for(int q=0;q<t;q++){
        long long n,a,b;
        scanf("%lld %lld %lld",&n,&a,&b);
        scanf("%s",seq);
        long long minz=2*a/b+2;
        long long pipe=0;
        long long pillar=0;
        pipe+=n*a;
        for(int i=0;i<=n;i++)   height[i]=1;
        int appear=0;
        for(int i=1;i<n;i++){
            if(seq[i]=='1'&&(!appear))    appear=i;
            if(appear) height[i]=2;
        }
        int disappear=1;
        for(int i=n-1;i>0;i--){
            if(seq[i]=='1'&&disappear){
                disappear=i;
                break;
            }
            if(disappear)   height[i+1]=1;
        }
        for(int i=appear;i<disappear;i++){
            if(seq[i]=='0'){
                int j;
                for(j=i;seq[j]=='0';j++);
                if(j-i>=minz){
                    for(int p=i+1;p<j;p++)    height[p]=1;
                }
                i=j;
            }
        }
        for(int i=0;i<=n;i++){
            pillar+=height[i]*b;
        }
        for(int i=0;i<n;i++){
            if(height[i]!=height[i+1])
            pipe+=a;
        }
        printf("%lld\n",pillar+pipe);
    }
}
