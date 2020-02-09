#include<stdio.h>
int prob[100010];
int visited[100010];
int main(){
	int n,m,check;
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d",prob+i);
	}
	check=n;
	for(int i=0;i<m;i++){
		if(visited[prob[i]]==0){
			visited[prob[i]]=1;
			check--;
		}
		else{
			visited[prob[i]]++;
		}
		if(check==0){
			printf("1");
			check=n;
			for(int j=1;j<=n;j++)	visited[j]--;
			for(int j=1;j<=n;j++)	if(visited[j])	check--;
		}
		else	printf("0");
	}
}