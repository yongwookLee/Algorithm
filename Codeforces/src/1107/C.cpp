//Brutality
#include<stdio.h>
#include<algorithm>
#include<functional>
int seq[200001];
char key[200001];
int main(){
	int n,k;
	char prev='1';
	scanf("%d %d",&n,&k);
	__int64 ans=0;
	for(int i=0;i<n;i++){
		scanf("%d",seq+i);
	}
	scanf("%s",key);
	int s,e,i=0;
	while(1){
		s=i;
		e=i+1;
		for(int j=i+1;j<n;j++){
			if(key[s]==key[j]){
				e=j+1;
			}
			else	break;
		}
		std::sort(seq+s,seq+e, std::greater<int>() );
		for(int j=s,t=0;j<e&&t<k;j++,t++){
			ans+=seq[j];
		}
		if(e==n)	break;
		i=e;
	}
	printf("%I64d",ans);
}