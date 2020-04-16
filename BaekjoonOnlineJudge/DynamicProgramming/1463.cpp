#include<stdio.h>
int d[1000010];	
int main(){
	d[1]=0;
	for(int i=2;i<=1000000;i++){
		d[i]=987654321;
	}
	for(int i=1;i<1000000;i++){
		if(d[i+1]>d[i]+1)	d[i+1]=d[i]+1;
		if(2*i<=1000000&&d[2*i]>d[i]+1)	d[i*2]=d[i]+1;
		if(3*i<=1000000&&d[3*i]>d[i]+1)	d[i*3]=d[i]+1;
	}
	int t;
	scanf("%d",&t);
	printf("%d",d[t]);
}