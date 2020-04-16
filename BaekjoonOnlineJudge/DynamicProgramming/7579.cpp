#include <iostream>

using namespace std;

int byte[101];
int cost[101];
int dp[101][10001];

int main(void) {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N,M; cin >> N >> M;
    for(int i = 0; i < N; i++)
        cin >> byte[i];
    for(int i = 0; i < N; i++)
        cin >> cost[i];

    int ans = 1e9;

    dp[0][cost[0]] = byte[0];
    for(int i = 1; i < N; i++) {
        for(int j = 0; j <= 10000; j++) {
                if(j-cost[i] >= 0)
                    dp[i][j] = max(dp[i][j], dp[i-1][j-cost[i]]+byte[i]);

                dp[i][j] = max(dp[i][j], dp[i-1][j]);

                if(dp[i][j] >= M) {
                    ans = min(ans, j);
                }
        }
    }
    cout<<ans;
    return 0;
}