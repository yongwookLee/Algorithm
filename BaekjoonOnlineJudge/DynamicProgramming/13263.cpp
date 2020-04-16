#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<ll> v;
ll d[100001];
ll a[100001];
ll b[100001];

double cross(ll x,ll y){
   return ((double)(d[y]-d[x])/(double)(b[x]-b[y]));
}

int main(void){
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)   scanf("%lld",&a[i]);
   for(int i=0;i<n;i++)   scanf("%lld",&b[i]);   
   
   int size=1;
   int t=0;
   v.push_back(0);
   for(int i=1;i<n;i++){
      if(size<2){
         int j=v[0];
         d[i]=d[j]+a[i]*b[j];
         v.push_back(i);
         size++;
         continue;
      }
      while(t+1<size&&cross(v[t],v[t+1])<=a[i]) t++;
      d[i]=d[v[t]]+a[i]*b[v[t]];
      v.push_back(i);
      size++;
      while(size>2&&cross(v[size-3],v[size-2])>cross(v[size-2],v[size-1])){
         v[size-2]=v[size-1];
         v.pop_back();
         size--;
      }
   }
   
   printf("%lld",d[n-1]);
   return 0;
}