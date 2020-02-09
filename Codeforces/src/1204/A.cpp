#include<stdio.h>
#include<math.h>
#include<string.h>
int b[60];
int main(){
    char s[110];
    scanf("%s",&s);
    int len=strlen(s);
    if(len%2==1){
        for(int i=1;i<len;i++){
            if(s[i]=='1'){
                printf("%d",len/2+1);
                return 0;
            }
        }
        printf("%d",len/2);
        return 0;
    }
    else   printf("%d",len/2);
}
