#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char s[105];
int poss[105];
void renew(int n){
    for(int i=1;i<n-1;i++){
        if(s[i-1]==s[i]-1||s[i+1]==s[i]-1)
            poss[i]=1;
        else    poss[i]=0;
    }
    if(s[1]==s[0]-1)    poss[0]=1;
    else    poss[0]=0;
    if(s[n-1]==s[n-2]+1)    poss[n-1]=1;
    else    poss[n-1]=0;
}
void del(int index,int n){
    for(int i=index;i<=n;i++){
        s[i]=s[i+1];
    }
}
int canDel(int n){
    renew(n);
    for(int i=0;i<n;i++)
        if(poss[i]) return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    scanf("%s",s);
    int cnt=0;
    while(canDel(n)){
        int maxi='a';
        int index=-1;
        for(int i=0;i<n;i++){
            if(maxi<s[i]&&poss[i]){
                maxi=s[i];index=i;
            }
        }
        if(index!=-1){
            del(index,n--);
            cnt++;
        }
    }
    cout<<cnt;
}
