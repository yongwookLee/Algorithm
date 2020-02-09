#include<bits/stdc++.h>
using namespace std;
int arr[200010];
int gcd(int a, int b){
	while(b!=0){
		int r = a%b;
		a= b;
		b= r;
	}
	return a;
}
int main(){
    int n,maxn=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(maxn<arr[i]) maxn=arr[i];
    }
    for(int i=0;i<n;i++)
        arr[i]=maxn-arr[i];
    sort(arr,arr+n,greater<int>());
    int g=gcd(arr[0],arr[1]);
    for(int i=2;i<n-1;i++){
        g=gcd(g,arr[i]);
        if(g==1)    break;
    }
    long long sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i]/g;
    }
    printf("%lld %d\n",sum,g);


}
