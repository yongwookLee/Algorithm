#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int A,B;
        cin>>A>>B;
        int b=9;
        long long cnt=0;
        for(b=9;b<=B;b=b*10+9){
            cnt+=A;
            if(b==999999999)    break;
        }
        cout<<cnt<<endl;
    }

}
