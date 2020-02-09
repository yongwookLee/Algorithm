#include <bits/stdc++.h>

long long arr[1020][21];
using namespace std;
int main(){
    int A,B;
    cin>>A>>B;
    long long sum=1;
    for(int i=1; i<=A+2*B-1; i++){
		arr[i][0] = 1;
		for(int j=1; j<=2*B&&j<=i; j++){
			arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			arr[i][j]%=1000000007;
			//printf("%d ",arr[i][j]);
		}
		//printf("\n");
	}
    cout<<(arr[A+2*B-1][2*B]+arr[A+2*B-1][2*B-1])%1000000007;


}
