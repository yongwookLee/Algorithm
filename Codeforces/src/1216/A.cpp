#include<bits/stdc++.h>

int main(){
    int n,m,a,b,c,p,q;
    int cnt=0,sum=0;
    char s[200005];
    scanf("%d",&n);
    scanf("%s",&s);
    for(int i=0;i<n;i+=2){
        if(s[i]!=s[i+1])    continue;
        else{
            if(s[i]=='a')   s[i]='b';
            else    s[i]='a';
            cnt++;
        }
    }
    printf("%d\n",cnt);
    printf("%s",s);
}
