#include<stdio.h>

int a[15];

int main(){
	a[1]=1;a[2]=2;a[3]=4;
	for(int i=4;i<=10;i++){
		a[i]=a[i-1]+a[i-2]+a[i-3];
	}
	int n,t;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&t);
		printf("%d\n",a[t]);
	}
}