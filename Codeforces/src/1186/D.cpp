#include<stdio.h>
#include<math.h>
int choose[100001];
int main(){
    int n;
    float a[100001];
    int flo[100001];
    int cei[100001];
    int dif[100001];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%f",a+i);
    }
    for(int i=0;i<n;i++){
        cei[i]=ceil(a[i]);
        flo[i]=floor(a[i]);
        dif[i]=cei[i]-flo[i];
    }
    int sum_down=0;
    for(int i=0;i<n;i++){
        sum_down+=flo[i];
    }
    for(int i=0;i<n;i++){
        if(sum_down<0&&dif[i]==1){
            sum_down++;
            choose[i]=1;
        }
    }
    for(int i=0;i<n;i++){
        if(choose[i])   printf("%d\n",cei[i]);
        else    printf("%d\n",flo[i]);
    }

}
