#include<bits/stdc++.h>
#define X first
#define Y second

using namespace std;
typedef pair<int,int> pii;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        scanf("%d %d",&n,&d);
        int a[105];
        for(int i=1;i<=n;i++){
            scanf("%d",a+i);
        }
        for(int i=2;i<=n;i++){
            if(d<=0)    break;
            if(d>=(i-1)*a[i]){
                d-=(i-1)*a[i];
                a[1]+=a[i];
            }
            else{
                a[1]+=(d/(i-1));
                d%=(i-1);
            }
        }
        printf("%d\n",a[1]);
    }
}
