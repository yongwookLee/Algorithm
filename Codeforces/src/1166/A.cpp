#include<stdio.h>

int alph[30];

int f(int n){
    return n*(n-1)/2;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char tmp[21];
        scanf("%s",tmp);
        alph[tmp[0]-'a']++;
    }
    int sum=0;
    for(int i=0;i<26;i++){
        sum+=(f(alph[i]/2)+f(alph[i]-alph[i]/2));
    }
    printf("%d",sum);
}
