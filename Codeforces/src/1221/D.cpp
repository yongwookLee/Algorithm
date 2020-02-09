#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9+10;
const ll LINF = 1LL*INF*INF;
ll A[300005];
ll B[300005];
ll dp[300005][4];

int main()
{
    int n,q;
    scanf("%d",&q);
    ll res = LINF;
    while(q--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%lld %lld",&A[i],&B[i]);
        dp[1][0] = 0;
        dp[1][1] = B[1];
        dp[1][2] = 2*B[1];
        for(int i=2;i<=n;i++){
            for(int j=0;j<3;j++){
                dp[i][j] = LINF;
                for(int k=0;k<3;k++){
                    if(k+A[i-1]==j+A[i]) continue;
                    dp[i][j] = min(dp[i][j],dp[i-1][k]+(ll)j*B[i]);
                }
            }
        }
        res = LINF;
        for(int i=0;i<3;i++)
            res = min(res,dp[n][i]);
        printf("%lld\n",res);
    }
    return 0;
}
