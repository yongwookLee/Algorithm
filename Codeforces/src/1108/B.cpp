#include<stdio.h>
#include<string.h>

int arr[10001];
int num[129];
int main(){
	int n,max=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",num+i);
		if(num[i]>max)	max=num[i];
	}
	printf("%d ",max);
	for(int i=1;i<=max;i++){
		if(max%i==0)	arr[i]=1;
	}
	for(int i=0;i<n;i++){
		if(arr[num[i]]){
			arr[num[i]]=0;	
			num[i]=0;
		}
	}
	
	max=0;
	for(int i=0;i<n;i++){
		if(num[i]>max)	max=num[i];
	}
	printf("%d",max);
}
