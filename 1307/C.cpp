#include<bits/stdc++.h>
#define X first
#define Y second

using namespace std;
typedef pair<int,int> pii;
typedef long long ll;

ll cnt[100005][2][26];
ll sum[26][26];
int main(){

    char t[100005];
    scanf("%s",t);

    int len=strlen(t);
    for(int i=0;i<len;i++){
        cnt[0][1][t[i]-'a']++;
    }
    for(int i=0;i<len;i++){
        if(i>0)
        for(int j=0;j<26;j++){
            cnt[i][1][j]=cnt[i-1][1][j];
            cnt[i][0][j]=cnt[i-1][0][j];
        }
        cnt[i][1][t[i]-'a']--;
        cnt[i][0][t[i]-'a']++;
    }
    for(int i=0;i<len-1;i++){
        for(int j=0;j<26;j++)
            sum[t[i]-'a'][j]+=cnt[i][1][j];
    }
    ll maxs=0;
    for(int i=0;i<26;i++)
    for(int j=0;j<26;j++){
        if(maxs<sum[i][j])maxs=sum[i][j];
    }
    cnt[0][1][t[0]-'a']++;
    for(int i=0;i<26;i++){
        if(maxs<cnt[0][1][i])   maxs=cnt[0][1][i];
    }
    cout<<maxs;
}
