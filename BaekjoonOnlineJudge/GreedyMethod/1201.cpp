#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M,K;
    cin>>N>>M>>K;
    if(M*K<N || M+K>N+1){
        printf("-1");
        return 0;
    }
    else{
        for(int i=N-M+1;i<=N;i++){
            printf("%d ",i);
        }
        if(N-M==0)  return 0;
        int upb=N-M;
        int quo=(N-M)/(K-1);
        int res=(N-M)%(K-1);
        while(res--){
            for(int i=upb-quo;i<=upb;i++)
                printf("%d ",i);
            upb=upb-quo-1;
        }
        while(upb){
            for(int i=upb-quo+1;i<=upb;i++)
                printf("%d ",i);
            upb=upb-quo;
        }
    }
}

