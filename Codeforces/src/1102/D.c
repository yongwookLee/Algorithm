#include<stdio.h>
#include<stdlib.h>
char str[500001];
int intstr[500001];
int num[3],numb;
int main(){
	int n;
	scanf("%d",&n);
	scanf("%s",str);
	for(int i=0;i<n;i++){
		switch(str[i]){
			case '0':
				num[0]++;
				break;
			case '1':
				num[1]++;
				break;
			case '2':
				num[2]++;
				break;
		}
	}
	for(int i=0;i<n;i++){
		intstr[i]=(int)str[i]-(int)'0';
	}
	numb=n/3;
	if(num[0]>numb){
		if(num[1]>numb){
			for(int i=n-1;i>=0;i--){
				if(str[i]=='0'&&num[0]>numb){
					str[i]='2';
					num[0]--;
					num[2]++;
				}
				if(str[i]=='1'&&num[1]>numb){
					str[i]='2';
					num[1]--;
					num[2]++;
				}
			}
		}
		else{
			if(num[2]>numb){
				for(int i=n-1;i>=0;i--){
					if(str[i]=='0'&&num[0]>numb){
						str[i]='1';
						num[0]--;
						num[1]++;
					}
				}
				for(int i=0;i<n;i++){
					if(str[i]=='2'&&num[2]>numb){
						str[i]='1';
						num[2]--;
						num[1]++;
					}
				}
			}
			else{
				for(int i=n-1;i>=0;i--){
					if(str[i]=='0'&&num[2]<numb){
						str[i]='2';
						num[0]--;
						num[2]++;
					}
					if(str[i]=='0'&&num[2]==numb&&num[0]>numb){
						str[i]='1';
						num[0]--;
						num[1]++;
					}
				}
			}
		}
	}
	else{
		if(num[1]>numb){
			if(num[2]>numb){
				for(int i=0;i<n;i++){
					if(str[i]=='2'&&num[2]>numb){
						str[i]='0';
						num[0]++;
						num[2]--;
					}
					if(str[i]=='1'&&num[1]>numb){
						str[i]='0';
						num[0]++;
						num[1]--;
					}
				}
			}
			else{
				for(int i=0;i<n;i++){
					if(str[i]=='1'&&num[0]<numb){
						str[i]='0';
						num[0]++;
						num[1]--;
					}
				}
				for(int i=n-1;i>=0;i--){
					if(str[i]=='1'&&num[2]<numb){
						str[i]='2';
						num[2]++;
						num[1]--;
					}
				}
			}
		}
		else{
			for(int i=0;i<n;i++){
				if(str[i]=='2'&&num[0]<numb){
					str[i]='0';
					num[0]++;
					num[2]--;
				}
				if(str[i]=='2'&&num[0]==numb&&num[2]>numb){
					str[i]='1';
					num[2]--;
					num[1]++;
				}
			}
		}
	}
	printf("%s",str);
}