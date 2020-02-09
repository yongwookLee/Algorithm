#include<stdio.h>
int a[5001], b[5001], c[5001];
int visited[5001][5001];
int main(){
	int n,k,tmp;
	scanf("%d %d", &n, &k);
	for(int i=0;i<n;i++){
		scanf("%d",&tmp);
		a[tmp]++;
		c[tmp]++;
		b[i]=tmp;
		if(a[tmp]>k){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	
	for(int i=0;i<n;i++){
		if(i<k){
			printf("%d ",i+1);
			visited[b[i]][i+1]=1;
		}
		else{
			for(int j=1;j<=k;j++){
				if(visited[b[i]][j]==0){
					printf("%d ",j);
					visited[b[i]][j]=1;
					break;
				}
			}
		}
	}
	return 0;
}