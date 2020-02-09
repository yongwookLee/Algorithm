#include <bits/stdc++.h>
#define mp make_pair
#define f first
#define s second
using namespace std;
int a[1000002];
int main()
{
    int n;
    cin>>n;
    vector<int> v[n];
    int len[n];
    for(int i=0;i<n;i++){
        scanf("%d",&len[i]);
        for(int j=0;j<len[i];j++){
            int t;scanf("%d",&t);
            v[i].push_back(t);
        }
    }
    vector<pair<int,int> > p;
    int plen=0;
    for(int i=0;i<n;i++){
        int mi=v[i][0];
        int ma=v[i][0];
        int j;
        for(j=1;j<len[i];j++){
            if(v[i][j]<=mi) mi=v[i][j];
            else    break;
        }
        if(j==len[i]){
            p.push_back(mp(mi,ma));
            plen++;
        }
    }
    sort(p.begin(),p.end());
    for(int i=0;i<plen;i++){
        if(a[p[i].f]==0)
            a[p[i].f]=plen-i;
    }
    a[1000001]=0;
    for(int i=999999;i>=0;i--)
        if(a[i]==0) a[i]=a[i+1];
    long long cnt=0;
    for(int i=0;i<plen;i++){
        cnt+=a[p[i].s];
    }
    printf("%lld",(long long)n*n-cnt);
}
