#include<stdio.h>
#include<string.h>

char str[200001];
int main(){
	int n,cost=0;
	scanf("%d",&n);
	scanf("%s",str);
	for(int i=0;i<n-1;i++){
		if(str[i]==str[i+1]){
			if(i+2==n){
				if(str[i]=='R'){
					str[i+1]='G';
					cost++;
				}
				if(str[i]=='G'){
					str[i+1]='R';
					cost++;
				}
				if(str[i]=='B'){
					str[i+1]='G';
					cost++;
				}
			}
			else{
				if(str[i]=='R'&&str[i+2]=='R'){
					str[i+1]='G';
					cost++;
				}
				if(str[i]=='R'&&str[i+2]=='G'){
					str[i+1]='B';
					cost++;
				}
				if(str[i]=='R'&&str[i+2]=='B'){
					str[i+1]='G';
					cost++;
				}
				if(str[i]=='G'&&str[i+2]=='R'){
					str[i+1]='B';
					cost++;
				}
				if(str[i]=='G'&&str[i+2]=='G'){
					str[i+1]='R';
					cost++;
				}
				if(str[i]=='G'&&str[i+2]=='B'){
					str[i+1]='R';
					cost++;
				}
				if(str[i]=='B'&&str[i+2]=='R'){
					str[i+1]='G';
					cost++;
				}
				if(str[i]=='B'&&str[i+2]=='G'){
					str[i+1]='R';
					cost++;
				}
				if(str[i]=='B'&&str[i+2]=='B'){
					str[i+1]='G';
					cost++;
				}
			}
		}
	}
	printf("%d\n%s",cost,str);
}
