#include<stdio.h>
#include<string.h>

int arr[4];
int main(){
	int q;
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf("%d %d %d %d",arr,arr+1,arr+2,arr+3);
		if(arr[0]==arr[2]){
			printf("%d %d\n",arr[0],arr[0]+1);
		}
		else{
			printf("%d %d\n",arr[0],arr[2]);
		}
	}

}