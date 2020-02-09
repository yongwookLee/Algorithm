#include<stdio.h>

int tab[110];
int abs(int a){
	int b;
	if(a>0){
		return a;
	}
	else return (-1)*a;
}
int main(){
	int n,k,presum=0,sum=0,des,max=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",tab+i);		
	}
	for(int i=0;i<n;i++){
		presum+=tab[i];
	}
	for(int i=0;i<k;i++){
		for(int j=0;i+j*k<n;j++){
			sum+=tab[i+j*k];
		}
		des=presum-sum;
		if(max<abs(des))	max=abs(des);
		sum=0;
	}
	printf("%d",max);
}