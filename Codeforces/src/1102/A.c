#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n%2){
		if((n-1)%4==0){
			printf("1");
		}
		else{
			printf("0");
		}
	}
	else{
		if(n%4==0){
			printf("0");
		}
		else{
			printf("1");
		}
	}
}