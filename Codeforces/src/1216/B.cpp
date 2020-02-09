#include<bits/stdc++.h>
using namespace std;
pair<int,int> a[1010];
int main(){
    int n,m,b,c,p,q;
    long long cnt=0,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d",&tmp);
        a[i]=make_pair(tmp,i+1);
    }
    sort(a,a+n,greater<pair<int,int> >());
    for(int i=0;i<n;i++){
        sum+=a[i].first*i+1;
    }
    printf("%lld\n",sum);
    for(int i=0;i<n;i++){
        printf("%lld ",a[i].second);
    }

}
