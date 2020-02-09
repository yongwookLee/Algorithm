#include<stdio.h>
int what[101];
int main(){
    int n,ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)    scanf("%d",what+i);
    for(int i=0;i<n-1;i++){
        switch(what[i]){
        case 1:
            switch(what[i+1]){
            case 1:
                ans+=10000;
                break;
            case 2:
                ans+=3;
                if(i>=1)    if(what[i-1]==3)    ans--;   
                break;
            case 3:
                ans+=4;
                break;
            }
            break;
        case 2:
            switch(what[i+1]){
            case 1:
                ans+=3;
                break;
            case 2:
                ans+=10000;
                break;
            case 3:
                ans+=10000;
                break;
            }
            break;
        case 3:
            switch(what[i+1]){
            case 1:
                ans+=4;
                break;
            case 2:
                ans+=10000;
                break;
            case 3:
                ans+=10000;
                break;
            }
            break;
        }
    }
    if(ans>=10000){
        printf("Infinite\n");
    }
    else{
        printf("Finite\n%d",ans);
    }
}
