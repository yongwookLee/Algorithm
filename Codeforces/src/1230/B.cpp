#include<stdio.h>
char S[200010];
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    scanf("%s",S);
    int j=0;

    if(n==1&&k==1){  printf("0");
        return 0;
    }
    for(int i=0,j=0;i<k;i++){
        if(i+j>=n)    break;
        if(i+j==0){
            if(S[i]!='1')   S[i]='1';
            else    j++,i--;
        }
        else if(S[i+j]!='0')   S[i+j]='0';
        else    j++,i--;
    }

    printf("%s",S);
}