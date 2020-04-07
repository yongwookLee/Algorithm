#include<bits/stdc++.h>
#define X first
#define Y second

using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
int a[100005];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        scanf("%d %d",&n,&x);
        int maxa=0;
        for(int i=0;i<n;i++){
            scanf("%d",a+i);
        }
        sort(a,a+n);
        if(x%a[n-1]==0){
            printf("%d\n",x/a[n-1]);
        }
        else if(x<a[n-1]){
            int f=0;
            for(int i=0;i<n-1;i++){
                if(x==a[i]){
                    printf("1\n");
                    f=1;
                }
            }
            if(f==0) printf("2\n");
        }
        else{
            printf("%d\n",x/a[n-1]+1);
        }

    }
}
