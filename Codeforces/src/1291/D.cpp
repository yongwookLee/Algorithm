#include <bits/stdc++.h>
using namespace std;

const int N = 200005;

char s[N];
int n, q, l, r, sum[N][26];

int main() {
    cin>>(s + 1);
    n = strlen(s + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 26; j++) {
            sum[i][j] = sum[i - 1][j];
        }
        sum[i][s[i]-'a']++;
    }
    cin>>q;
    while (q--) {
        scanf("%d %d",&l,&r);
        int cnt = 0;
        for (int i = 0; i < 26; i++)
            cnt += (sum[r][i] - sum[l - 1][i] > 0);
            
        if (l == r || cnt >= 3 || s[l] != s[r])
            printf("Yes\n");
        else
            printf("No\n");
    }
}