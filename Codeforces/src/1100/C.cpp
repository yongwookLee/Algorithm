#include<stdio.h>
#include<math.h>
#define PI 3.1415926535

int main(){
	int n,r;
	scanf("%d %d",&n,&r);
	double nd, rd;
	nd=(double)n;
	rd=(double)r;
	double precal=1/(1-(sin(PI/nd)));
	printf("%lf",precal*rd-rd);
}