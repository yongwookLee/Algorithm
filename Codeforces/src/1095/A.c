#include<stdio.h>
int i;
int main(){
    int N;
    char str[55];
    scanf("%d",&N);
    scanf("%s",str);
    for(int j=0;j<N;j+=i){
    	printf("%c",str[j]);
    	i++;
	}
}