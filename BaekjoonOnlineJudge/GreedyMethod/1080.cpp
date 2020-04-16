#include<bits/stdc++.h>
using namespace std;
int A[55][55];
int B[55][55];
void rev(int x,int y){
    for(int i=x;i<x+3;i++)
        for(int j=y;j<y+3;j++)
            A[i][j]=1-A[i][j];
}
int main(){
    int N,M;
    cin>>N>>M;
    char tmp[55];
    for(int i=0;i<N;i++){
        scanf("%s",tmp);
        for(int j=0;j<M;j++)
            A[i][j]=tmp[j]-'0';
    }
    for(int i=0;i<N;i++){
        scanf("%s",tmp);
        for(int j=0;j<M;j++)
            B[i][j]=tmp[j]-'0';
    }
    int cnt=0;
    for(int i=0;i<N-2;i++){
        for(int j=0;j<M-2;j++){
            if(A[i][j]!=B[i][j]){
                cnt++;
                rev(i,j);
            }
        }
    }
    int Same=1;
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            if(A[i][j]!=B[i][j])
                Same=0;
    if(Same)    printf("%d",cnt);
    else    printf("-1");
}
