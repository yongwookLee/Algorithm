#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int r[105];
    int b[105];
    for(int i=0;i<n;i++)
        scanf("%d",r+i);
    for(int i=0;i<n;i++)
        scanf("%d",b+i);
    int bM=0;
    int rM=0;
    for(int i=0;i<n;i++){
        if(r[i]>b[i])   rM++;
        if(r[i]<b[i])   bM++;
    }
    if(rM==0){
        printf("-1");
        return 0;
    }
    printf("%d",bM/rM+1);
}
