#include<stdio.h>

int main(){
	int n,t;
	__int64 ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		__int64 k;
		scanf("%I64dd",&k);
		scanf("%d",&t);
		ans=9*(k-1)+t;
		printf("%I64d\n",ans);
		ans=0;
	}

}