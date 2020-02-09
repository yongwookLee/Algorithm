#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[21][11];
    char t[21][11];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<m;i++)
        cin>>t[i];
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        int y;
        scanf("%d",&y);
        printf("%s%s\n",s[(y-1)%n],t[(y-1)%m]);
    }

}
