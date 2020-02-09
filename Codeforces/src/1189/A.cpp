#include<stdio.h>
char a[101];
int main(){
    int n;
    scanf("%d",&n);
    scanf("%s",a);

    int one=0,zero=0;
    for(int i=0;i<n;i++){
        if(a[i]=='0')   zero++;
        else one++;
    }
    if(one==zero){
        printf("2\n%c %s",a[0],a+1);
    }
    else{
        printf("1\n%s",a);
    }
}
