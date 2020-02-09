#include<stdio.h>
#include<string.h>
#include<stack>

using namespace std;
char str[100001];
stack<char> s;

int main(){
	scanf("%s",str);
	int count=0;
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(s.empty()){
			s.push(str[i]);
			continue;
		}
		if(s.top()==str[i]){
			s.pop();
			count++;
		}
		else{
			s.push(str[i]);
		}
	}
	if(count%2)	printf("Yes");
	else	printf("No");
}