#include<stdio.h>
#include<string.h>
char s[1000005];
int w[1000005];
int cnt[1000005];
int main(){
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len-1;i++){
        if(s[i]=='v'&&s[i+1]=='v')
            w[i]=1;
    }
    cnt[0]=w[0];
    for(int i=1;i<len;i++){
        cnt[i]=cnt[i-1]+w[i];
    }
    long long sum=0;
    for(int i=1;i<len;i++){
        if(s[i]=='o'){
            sum+=((long long)cnt[i-1])*(cnt[len-1]-cnt[i]);
        }
    }
    printf("%lld",sum);
}
