#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;

int a[100006];
int cnt[100006][50];
int sum[50];
double averageX,averageY;
bool compare(pair<int,int> l,pair<int,int> r){
    double langle=atan2(l.s-averageY,l.f-averageX);
    double rangle=atan2(r.s-averageY,r.f-averageX);
    
    return langle>rangle;
}
int main(){
    int n;
    cin>>n;
    pair<int,int> a[200005];
    for(int i=0;i<n;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        a[i]=make_pair(x,y);
    }
    averageX=(double)(a[0].f+a[n/2].f)/2;
    averageY=(double)(a[0].s+a[n/2].s)/2;
    sort(a,a+n,compare);
    if(n%2==1){
        printf("NO");
        return 0;
    }


    else{
        int fi=0;
        for(int i=0;i<n/2-1;i++){
            if(a[i+1].f-a[i].f==a[n/2+i].f-a[n/2+1+i].f){
                if(a[i+1].s-a[i].s==a[n/2+i].s-a[n/2+1+i].s){
                    fi++;
                }
            }
        }
        if(fi==n/2-1)  printf("YES");
        else    printf("NO");
        return 0;
    }
}
