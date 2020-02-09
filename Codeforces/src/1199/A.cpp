#include<stdio.h>
int arr[100001];
int main(){
    int n,x,y;
    scanf("%d %d %d",&n,&x,&y);
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    for(int i=0;i<n;i++){
            int f=0;
        for(int j=i-x;j<=i+y;j++){
            if(j<0 || j>=n || j==i) continue;
            if(arr[j]<arr[i]){
                f=1;break;
            }
        }
        if(!f){
            printf("%d",i+1);
            break;
        }

    }

}
