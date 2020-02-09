#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int a[300010];
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",a+i);
        }
        if(n%2){
            int f=1;
            for(int i=0;i<=n/2;i++){
                if(a[i]<i)  f=0;
            }
            for(int i=n/2+1;i<n;i++){
                if(a[i]<n-i-1)    f=0;
            }
            if(f){
                printf("YES\n");
            }
            else    printf("NO\n");
        }
        else{
            int f=1,s=1;
            for(int i=0;i<n/2+1;i++){
                if(a[i]<i)  f=0;
            }
            for(int i=n-1,j=0;i>=n/2+1;i--,j++){
                if(a[i]<j)    f=0;
            }

            for(int i=0;i<n/2-1;i++){
                if(a[i]<i)  s=0;
            }
            for(int i=n-1,j=0;i>=n/2-1;i--,j++){
                if(a[i]<j)    s=0;
            }
            if(f||s){
                printf("YES\n");
            }
            else    printf("NO\n");
        }
    }
}
