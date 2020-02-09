#include <stdio.h>
#include <utility>
#include <algorithm>
using namespace std;

int p[101];
int s[101];
int c[101];

pair< pair< int , int >, int > pp[100];

int main()
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    for(int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(int i=0;i<n;i++){
        scanf("%d",s+i);
    }
    
    int cnt=0;
    
    for(int i=0;i<n;i++){
        int t=0;
        pp[i]=make_pair(make_pair(s[i],p[i]),t);
    }
    for(int i=0;i<k;i++){
        int tmp;
        scanf("%d",&tmp);
        pp[tmp-1].second=1;
    }
    
    sort(pp,pp+n);
    
    for(int i=0;i<n;i++){
        if(pp[i].second)
            if(pp[i].first.first==pp[i+1].first.first)
                cnt++;
    }
    printf("%d",cnt);
}
