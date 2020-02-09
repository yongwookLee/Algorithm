#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        int maxi=0;
        int a[3600];
        for(int i=0;i<n;i++){
            scanf("%d",a+i);
        }
        if(m-1-k<=0){
            for(int i=0;i<m;i++){
                if(maxi<a[i])   maxi=a[i];
            }
            for(int i=n-1;i>n-m-1;i--){
                if(maxi<a[i])   maxi=a[i];
            }
            printf("%d\n",maxi);
            continue;
        }

        for(int t=0;t<=k;t++){
            int mini=1e9;
            for(int i=t,j=n-m+t;i<=m-k-1+t;i++,j++){
                int tmp=max(a[i],a[j]);
                if(mini>tmp)   mini=tmp;
            }
            if(mini>maxi)   maxi=mini;
        }
        printf("%d\n",maxi);
    }
}
