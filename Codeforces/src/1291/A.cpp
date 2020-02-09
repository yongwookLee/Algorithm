#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        scanf("%d",&n);
        char s[3001];
        scanf("%s",s);
        int even=0,odd=0;
        int lastOdd=-1;
        for(int i=0;i<n;i++){
            if(s[i]%2==0)  even++;
            else{
                odd++;
                lastOdd=i;
            }
        }
        if(odd%2==0&&lastOdd==n-1){
            printf("%s\n",s);
            continue;
        }
        if(odd<2){
            printf("-1\n");
            continue;
        }
        else{
            for(int i=0,tmp=0;i<n&&tmp<2;i++){
                if(s[i]%2==1){
                    tmp++;
                    printf("%c",s[i]);
                }
            }
            printf("\n");
        }
    }
}
