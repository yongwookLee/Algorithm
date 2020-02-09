#include <bits/stdc++.h>
#define f first
#define s second
#define pb(x) push_back(x)
#define mp(x) make_pair(x)

using namespace std;
typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<int, pii> piii;
int a[101];

int main(){
    int t;
    scanf("%d",&t);
    for(int q=0;q<t;q++){
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        for(int i=0;i<n;i++){
            scanf("%d",a+i);
        }
        int f=0;
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]>k+m){
                f=1;
                break;
            }
            else if(a[i+1]-a[i]>k){
                m-=(a[i+1]-a[i]-k);
            }
            else if(a[i+1]>=k){
                m+=a[i]-a[i+1]+k;
            }
            else
                m+=a[i];
        }
        if(f){
            printf("NO\n");
            continue;
        }
        else{
            printf("YES\n");
        }
    }

}
