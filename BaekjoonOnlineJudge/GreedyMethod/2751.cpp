#include<stdio.h>
#include<algorithm>
#include<utility>

using namespace std;
int p[1000005];

int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int x,y;
        scanf("%d",&x,&y);
        p[i]=x;
    }
    sort(p,p+N);
    for(int i=0;i<N;i++){
        printf("%d\n",p[i]);
    }
}
