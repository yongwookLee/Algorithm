#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > ed;
int seven;
bool compare(pair<int,int> a,pair<int,int> b){
    int a1,a2,b1,b2;
    if(a.first==7)  a.first=seven;
    if(a.second==7)  a.second=seven;
    if(b.first==7)  b.first=seven;
    if(b.second==7)  b.second=seven;
    a1=a.first;a2=a.second;
    b1=b.first;b2=b.second;
    if(a1>a2){
        int tmp=a1;
        a1=a2;
        a2=tmp;
    }
    if(b1>b2){
        int tmp=b1;
        b1=b2;
        b2=tmp;
    }
    if(a1==b1)  return a2<b2;
    else    return a1<b1;
}
bool pairSame(pair<int,int> a,pair<int,int> b){

    if(a.first==7)  a.first=seven;
    if(a.second==7)  a.second=seven;
    if(b.first==7)  b.first=seven;
    if(b.second==7)  b.second=seven;
    if(a==b)    return true;
    if(a.first==b.second&&a.second==b.first)    return true;
    else    return false;
}
int main(){
    int n,m;
    vector<int> v(7);
    for(int i=1;i<=7;i++)    v[i-1]=i;
    scanf("%d %d",&n,&m);
    if(n<7){
        for(int i=0;i<m;i++){
            int q,w;
            scanf("%d %d",&w,&q);
        }
        printf("%d",m);
    }
    else{
        if(m==0){
            printf("0");
            return 0;
        }
        for(int i=0;i<m;i++){
            int tmp1,tmp2;
            scanf("%d %d",&tmp1,&tmp2);
            ed.push_back(make_pair(tmp1,tmp2));
        }
        int maxi=0;
        vector<pair<int,int> > edge;
        do{
            int ans=1;
            edge.clear();
            for(auto x : ed){
                edge.push_back(make_pair(v[x.first-1],v[x.second-1]));
            }

            for(seven=1;seven<=6;seven++){
                sort(edge.begin(),edge.end(),compare);
                for(int j=1;j<m;j++){
                    if(!pairSame(edge[j],edge[j-1]))    ans++;
                }
                if(ans>maxi)    maxi=ans;
                ans=0;
            }
        }while(next_permutation(v.begin(),v.end()));
       printf("%d",maxi);

    }
}
