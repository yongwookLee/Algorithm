#include<stdio.h>
#include<stdlib.h>

char str[301];
int main(){
	int q,n;
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf("%d",&n);
		scanf("%s",str);
		if(n>2){
			printf("YES\n2\n");
			printf("%c %s\n",str[0],str+1);
		}
		else{
			if(str[0]<str[1]){
				printf("YES\n2\n");
				printf("%c %c\n",str[0],str[1]);
			}
			else{
				printf("NO\n");
			}
		}
	}

}