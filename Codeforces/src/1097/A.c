#include<stdio.h>
int main(){
	char Hand[5][2];
	char Table[2];
	scanf("%s",	Table);
	for(int i=0;i<5;i++)
		scanf("%s",Hand[i]);
	for(int i=0;i<5;i++){
		if(Hand[i][0]==Table[0]){
			printf("YES");
			return 0;
		}
		if(Hand[i][1]==Table[1]){
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}