#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
            vector<pair<int,int> > v;
        int n;
        scanf("%d",&n);
        int a,b;
        for(int i=0;i<n;i++){
            scanf("%d %d",&a,&b);
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(),v.end());
        int f=1;
        for(int i=0;i<n-1;i++){
            if(v[i+1].first<v[i].first||v[i+1].second<v[i].second)
                f=0;
        }
        if(f){
            printf("YES\n");
            int x=0,y=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<v[i].first-x;j++){
                    printf("R");
                }
                for(int j=0;j<v[i].second-y;j++){
                    printf("U");
                }
                x=v[i].first;
                y=v[i].second;
            }
            printf("\n");
        }
        else
            printf("NO\n");
    }
}
