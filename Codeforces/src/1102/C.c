#include<stdio.h>
int n,x,y;
int doorDur[101];
int main(){
	scanf("%d %d %d",&n,&x,&y);
	for(int i=0;i<n;i++)
		scanf("%d",&doorDur[i]);
	if(x>y){
		printf("%d",n);
		return 0;
	}
	if(x<=y){
		int weak=0, strong=0;
		for(int i=0;i<n;i++){
			if(doorDur[i]<=x)	weak++;
			else	strong++;
		}
		printf("%d",weak/2+weak%2);
	}
}