#include<stdio.h>
#include<algorithm>
int main(){
    char a[3][3];
    for(int i=0;i<3;i++)    scanf("%s",a[i]);
    int b[4]={};
    for(int i=0;i<3;i++){
        if(a[i][1]=='p')    b[i]+=20;
        if(a[i][1]=='s')    b[i]+=40;
        b[i]+=(a[i][0]-'0');
    }
    if(b[0]==b[1]&&b[1]==b[2]){
        printf("0");
        return 0;
    }
    std::sort(b,b+3);
    if(b[1]==b[0]+1&&b[2]==b[1]+1){
        printf("0");
        return 0;
    }
    int minit=b[1]-b[0];
    if(b[2]-b[1]<minit) minit=b[2]-b[1];
    if(minit==0){
        printf("1");
        return 0;
    }
    if(minit==1){
        printf("1");
        return 0;
    }
    if(minit==2){
        printf("1");
        return 0;
    }
    else{
        printf("2");
        return 0;
    }
}
