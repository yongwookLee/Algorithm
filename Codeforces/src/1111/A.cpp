#include<stdio.h>
#include<string.h>
int decide(char a){
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
		return 1;
	}
	else return 0;
}
int main(){
	char s[1001];
	char t[1001];
	scanf("%s",s);
	scanf("%s",t);
	int slen=strlen(s);
	int tlen=strlen(t);
	if(slen!=tlen){
		printf("No");
		return 0;
	}
	else{
		for(int i=0;i<slen;i++){
			if(decide(s[i])!=decide(t[i])){
				printf("No");
				return 0;
			}
		}
		printf("Yes");
		return 0;
	}
}