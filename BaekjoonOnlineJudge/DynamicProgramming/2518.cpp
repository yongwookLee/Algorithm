#include <bits/stdc++.h>
using namespace std;

int n;
int arr[3][111], sz[3];
int dp[111][111][111][3];
const int inf = 1e9+7;

int cost(int a, int b){
    int d = abs(a - b);
    d %= n;
    return min(d, n-d);
}

int f(int i, int j, int k, int s){
    int &res = dp[i][j][k][s];
    if(res != -1) return res;
    if(i > sz[0] + 1 || j > sz[1] + 1 || k > sz[2] + 1) return res = 1e9;
    if(i == sz[0] + 1 && j == sz[1] + 1 && k == sz[2] + 1) return res = 0;
    int t = 0;
    if(s == 0) t = arr[0][i-1];
    else if(s == 1) t = arr[1][j-1] + n/3*2;
    else t = arr[2][k-1] + n/3;
    res = inf;
    res = min(res, f(i+1, j, k, 0) + cost(t, arr[0][i]));
    res = min(res, f(i, j+1, k, 1) + cost(t, arr[1][j] + n/3*2));
    res = min(res, f(i, j, k+1, 2) + cost(t, arr[2][k] + n/3));
    return res;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i=0; i<3; i++){
        cin >> sz[i];
        for(int j=1; j<=sz[i]; j++){
            cin >> arr[i][j]; arr[i][j]--;
        }
    }
    arr[1][0] = n/3, arr[2][0] = n/3*2;
    memset(dp, -1, sizeof dp);
    cout << f(1, 1, 1, 0);
}