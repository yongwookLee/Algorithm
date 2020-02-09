#include<stdio.h>
int a[15];
int main(){
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
		scanf("%d",&a[i]);
	int T=1;
	for(int i=0;i<N;i++)	T*=2;
	T--;
	int ans=0;
	for(int i=0;i<=T;i++){
		int b=i;
		for(int j=0;j<N;j++){
			ans+=((b%2)*2-1)*a[j];
			b/=2;
		}
		if(!(ans%360)){
			printf("YES");
			return 0;
		}
		else	ans=0;
	}
	printf("NO");
}