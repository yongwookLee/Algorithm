#include<stdio.h>
int a[100001];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        int tmp1,tmp2;
        scanf("%d %d",&tmp1,&tmp2);
        a[tmp1]++,a[tmp2]++;
    }
    for(int i=1;i<=n;i++){
        if(a[i]==2){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}
