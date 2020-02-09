#include<stdio.h>
#include<algorithm>
#include<functional>

int count[200001];
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<(n);i++){
        scanf("%d",a+i);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==i)
                continue;
            else{
                count[a[i]+a[j]]++;
            }
        }
    }
    std::sort(count,count+200000,std::greater<int>());
    printf("%d",count[0]/2);
}