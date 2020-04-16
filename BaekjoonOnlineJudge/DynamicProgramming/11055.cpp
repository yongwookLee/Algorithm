#include<stdio.h>
int d[1001];
int main(){
    int N;
    scanf("%d",&N);
    int A[1001];
    for(int i=0;i<N;i++)    scanf("%d",A+i);
    for(int i=0;i<N;i++){
        if(!d[i]) d[i]=A[i];
        for(int j=0;j<i;j++){
            if(A[j]<A[i]){
                if(d[i]<d[j]+A[i]) d[i]=d[j]+A[i];
            }
        }
    }
    int maxi=0;
    for(int i=0;i<N;i++)    if(d[i]>maxi)   maxi=d[i];
    printf("%d",maxi);
}
