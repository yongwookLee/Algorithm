#include<bits/stdc++.h>

using namespace std;

int a[1001][1001];
char c[5]="RDLU";

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
       for(int j=1;j<=m;j++){
          scanf("%d",&a[i][j]);
      }
   }

   if(n%2){
      for(int i=1;i<=n;i++){
         for(int j=0;j<m-1;j++) printf("%c",c[2*((1+i)%2)]);
         if(i<n) printf("D");
      }
   }
   else if(m%2){
      for(int i=1;i<=m;i++){
         for(int j=0;j<n-1;j++)   printf("%c",c[1+2*((i+1)%2)]);
         if(i<m) printf("R");
      }
   }
   else{
      int mn=1001;
      int my,mx;
      for(int i=1;i<=n;i++){
         for(int j=1;j<=m;j++){
            if((i+j)%2&&mn>a[i][j]){
               mn=a[i][j];
               my=i;
               mx=j;
            }
         }
      }
      if(my==1){
         int t=1;
         for(int i=1;i<=m;i++){
            if(t%2){
               printf("D");
               t=1-t;
            }
            else if(i!=mx){
               printf("U");
               t=1-t;
            }
            if(i<m) printf("R");
         }if(n>2)
         printf("D");
         for(int i=3;i<=n;i++){
            for(int j=0;j<m-1;j++) printf("%c",c[2*(i%2)]);
            if(i<n) printf("D");
         }
      }
      else{
         for(int i=1;i<my-1;i++){
            for(int j=0;j<m-1;j++) printf("%c",c[2*((1+i)%2)]);
            printf("D");
         }
         int tx=(my%2 ? m:1);
         if(my%2){
            int t=0;
            for(int i=m;i>=1;i--){
               if(t%2){
                  printf("U");
                  t=1-t;
               }
               else if(i!=mx){
                  printf("D");
                  t=1-t;
               }
               if(i>1) printf("L");
            }
         }
         else{
            int t=0;
            for(int i=1;i<=m;i++){
               if(t%2){
                  printf("U");
                  t=1-t;
               }
               else if(i!=mx){
                  printf("D");
                  t=1-t;
               }
               if(i<m) printf("R");
            }
         }
         printf("D");
         for(int i=my+1;i<=n;i++){
            for(int j=0;j<m-1;j++) printf("%c",c[2*(i%2)]);
            if(i<n) printf("D");
         }
      }

   }
   return 0;
}
