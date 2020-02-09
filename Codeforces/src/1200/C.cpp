#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int a[101];
long long gcd(ll u, ll v){
    if (v == 0)
        return u;
    else
        return gcd(v, u%v);
}
int main(){
    long long n,m,q;
    cin >> n >> m >> q;
    long long g=gcd(n,m);
    for(int t=0;t<q;t++){
        long long sx,sy,ex,ey;
        long long s,e;
        cin >> sx >> sy >> ex >> ey;
        if(sx==1){
            s=(sy-1)/(n/g);
        }
        else{
            s=(sy-1)/(m/g);
        }
        if(ex==1){
            e=(ey-1)/(n/g);
        }
        else{
            e=(ey-1)/(m/g);
        }
        if(s==e) printf("YES\n");
        else    printf("NO\n");
    }

}
