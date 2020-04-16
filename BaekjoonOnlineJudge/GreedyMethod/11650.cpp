#include<stdio.h>
#include<algorithm>
#include<utility>

using namespace std;
pair<int,int> p[100005];

int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        p[i]=make_pair(x,y);
    }
    sort(p,p+N);
    for(int i=0;i<N;i++){
        printf("%d %d\n",p[i].first,p[i].second);
    }
}
