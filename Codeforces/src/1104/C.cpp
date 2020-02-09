#include<stdio.h>
#include<string.h>
#include<stack>

using namespace std;
char str[1001];
int grid[16];

int main(){
	scanf("%s",str);
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]=='0'){
			for(int i=0;i<3;i++)	for(int j=0;j<4;j++){
				if(grid[j*4+i]+grid[j*4+i+4]==0){
					grid[j*4+i]=grid[j*4+i+4]=1;
					printf("%d %d\n",j+1,i+1);
					goto te;
				}
			}
			te:
			for(int i=0;i<4;i++){
				if(grid[i]+grid[i+4]+grid[i+8]+grid[i+12]==4){
					grid[i]=grid[i+4]=grid[i+8]=grid[i+12]=0;
				}
				if(grid[4*i+0]+grid[4*i+1]+grid[4*i+2]+grid[4*i+3]==4){
					grid[4*i+0]=grid[4*i+1]=grid[4*i+2]=grid[4*i+3]=0;
				}
			}
		}
		if(str[i]=='1'){
			for(int j=2;j>=0;j--){
				for(int i=0;i<4;i++){
					if(grid[i*4+j]+grid[i*4+j+1]==0){
						grid[i*4+j]=grid[i*4+j+1]=1;
						printf("%d %d\n",i+1,j+1);
						goto here;
					}
				}
			}
			here:
			for(int i=0;i<4;i++){
				if(grid[i]+grid[i+4]+grid[i+8]+grid[i+12]==4){
					grid[i]=grid[i+4]=grid[i+8]=grid[i+12]=0;
				}
				if(grid[4*i+0]+grid[4*i+1]+grid[4*i+2]+grid[4*i+3]==4){
					grid[4*i+0]=grid[4*i+1]=grid[4*i+2]=grid[4*i+3]=0;
				}
			}
		}
	}
}