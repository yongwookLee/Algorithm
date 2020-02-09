#include<stdio.h>
#include<algorithm>
int a[100001];
int b[100001];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    std::sort(a,a+n);\
    if(a[n-1]>=a[n-2]+a[n-3])    printf("NO\n");
    else{
        printf("YES\n");
        b[0]=a[n-1];
        int i1=1,i2=n-1;
        for(int i=1;i<n;i++){
            if(i%2) b[i1]=a[n-1-i],i1++;
            else    b[i2]=a[n-1-i],i2--;
        }
        for(int i=0;i<n;i++)
            printf("%d ",b[i]);
    }
}
