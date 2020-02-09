#include<stdio.h>
int a[101];
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",a+i);
    }
    int sum=0,tot=0,cnt=1;
    sum+=a[0];
    for(int i=0;i<N;i++){
        tot+=a[i];
        if(a[i]*2<=a[0])
            sum+=a[i],cnt++;
    }
    if(sum*2>tot){
        printf("%d\n1 ",cnt);
        for(int i=0;i<N;i++){
          
            if(a[i]*2<=a[0])
                printf("%d ",i+1);
        }
    }
    else{
        printf("0");
    }
}
