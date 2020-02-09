#include<bits/stdc++.h>
using namespace std;
char str[200001];

int whowin(int ql,int qr,int nl,int nr){
    if(ql==qr){
        if(nl==nr)  return 0;
        else    return 1;
    }
    if(ql>qr){
        if(nr-nl==9*(ql-qr)/2)    return 0;
        else    return 1;
    }
    else{
        if(nr-nl==9*(ql-qr)/2)    return 0;
        else    return 1;
    }
}
int ql,qr,nl,nr;
int main(){
    int n;
    scanf("%d",&n);
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]=='?'){
            if(i<len/2) ql++;
            else    qr++;
        }
        else{
            if(i<len/2) nl+=(str[i]-'0');
            else    nr+=(str[i]-'0');
        }
    }
    int minn=min(nl,nr);
    nr-=minn;
    nl-=minn;
    if(whowin(ql,qr,nl,nr)) printf("Monocarp");
    else    printf("Bicarp");
}
