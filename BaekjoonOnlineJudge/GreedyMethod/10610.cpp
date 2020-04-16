#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<functional>
using namespace std;

char N[100001];
int main(){
    scanf("%s",N);
    int zero=0;
    int sum=0;
    int len=strlen(N);
    for(int i=0;i<len;i++){
        if(N[i]=='0')   zero++;
        sum+=(N[i]-'0');
    }
    if(sum%3 || zero==0){
        printf("-1\n");
        return 0;
    }
    else{
        sort(N,N+len,greater<int>());
        printf("%s",N);
    }

}
