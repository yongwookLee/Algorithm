#include <bits/stdc++.h>
#define f first
#define s second
#define pb(x) push_back(x)
#define mp(x) make_pair(x)

using namespace std;
typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<int, pii> piii;
int a[10];

int main(){
    int n;
    ll ans = 0;
    scanf("%d",&n);
    char s[100001];
    scanf("%s",&s);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]=='L'){
            for(int j=0;j<10;j++){
                if(a[j]==0){
                    a[j]=1;
                    break;
                }
            }
        }
        else if (s[i]=='R'){
            for(int j=9;j>=0;j--){
                if(a[j]==0){
                    a[j]=1;break;
                }
            }
        }
        else{
            a[s[i]-'0']=0;
        }
    }
    for(int i=0;i<10;i++)printf("%d",a[i]);
}
