#include<stdio.h>
#include<algorithm>

int main(){
    int a[3],d;
    scanf("%d %d %d %d",a,a+1,a+2,&d);
    std::sort(a,a+3);
    if(a[1]-a[0]>=d && a[2]-a[1]>=d)
        printf("0");
    else if(a[1]-a[0]<d && a[2]-a[1]>=d)
        printf("%d",d-a[1]+a[0]);
    else if(a[2]-a[1]<d && a[1]-a[0]>=d)
        printf("%d",d-a[2]+a[1]);
    else
        printf("%d",2*d-a[2]+a[0]);
}
