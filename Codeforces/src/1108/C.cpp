#include<stdio.h>
#include<string.h>

char str[200001];
char comp[200010][6];
int cost[6];
int main(){
	int n,min=300000,minindex=0;
	scanf("%d",&n);
	scanf("%s",str);
	for(int i=0;i<n;i+=3){
		comp[i][0]='R';
		comp[i+1][0]='G';
		comp[i+2][0]='B';
		comp[i][1]='G';
		comp[i+1][1]='B';
		comp[i+2][1]='R';
		comp[i][2]='B';
		comp[i+1][2]='R';
		comp[i+2][2]='G';
		comp[i][3]='B';
		comp[i+1][3]='G';
		comp[i+2][3]='R';
		comp[i][4]='G';
		comp[i+1][4]='R';
		comp[i+2][4]='B';
		comp[i][5]='R';
		comp[i+1][5]='B';
		comp[i+2][5]='G';
	}
	for(int i=0;i<6;i++){
		for(int j=0;j<n;j++){
			if(str[j]!=comp[j][i]){
				cost[i]++;
			}
		}
	}
	for(int i=0;i<6;i++){
		if(cost[i]<min){
			min=cost[i];
			minindex=i;
		}
	}
	printf("%d\n",min);
	for(int i=0;i<n;i++){
		printf("%c",comp[i][minindex]);
	}
}
