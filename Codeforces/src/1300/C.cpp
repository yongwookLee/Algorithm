#include<bits/stdc++.h>
using namespace std;

int a[100006];
int cnt[100006][50];
int sum[50];
int main(){
    int b,c,d,e,q,t,n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int tmp=a[i];
        int k=0;
        while(tmp){
            cnt[i][k]+=tmp%2;
            k++;
            tmp/=2;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<50;j++){
            sum[j]+=cnt[i][j];
        }
    }
    int maxs=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        int k=1,s=0;
        for(int j=0;j<50;j++){
            if(sum[j]==1&&cnt[i][j]){
                s+=k;
            }
            k*=2;
        }
        if(s>maxs){
            maxs=s;
            maxi=i;
        }
    }
    if(maxi==-1){
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    }
    else{
        for(int i=maxi;i<n+maxi;i++)
            printf("%d ",a[i%n]);
    }

}
