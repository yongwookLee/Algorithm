#include<stdio.h>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;
vector<pair<int, int> > vp;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int tmp1,tmp2;
        scanf("%d %d",&tmp1,&tmp2);
        vp.push_back(make_pair(tmp2,tmp1));
    }
    sort(vp.begin(),vp.end());
    int endTime=0;
    int cnt=0;
    for(auto x : vp){
        if(x.second>=endTime){
            cnt++;
            endTime=x.first;
        }
    }
    printf("%d",cnt);
}
