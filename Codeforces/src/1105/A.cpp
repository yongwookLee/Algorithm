#include<stdio.h>
int len[1001];
int abs(int a){
	if(a>0)	return a;
	else	return -a;
}
int cal(int n,int t){
	int cost=0;
	for(int i=0;i<n;i++){
		if(abs(len[i]-t)<=1)	continue;
		else{
			cost+=(abs(len[i]-t)-1);
		}
	}
	return cost;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",len+i);
	}
	int min=987654321;
	int max=0;
	for(int i=0;i<n;i++){
		if(min>len[i])	min=len[i];
		if(max<len[i])	max=len[i];
	}
	int mincost=987654321;
	int mint=0;
	for(int t=min;t<=max;t++){
		if(cal(n,t)<mincost){
			mincost=cal(n,t);
			mint=t;
		}
	}
	printf("%d %d",mint,mincost);
}