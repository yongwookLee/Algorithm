#include<bits/stdc++.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int c,m,x;
        scanf("%d %d %d",&c,&m,&x);
        int mini=std::min(c,m);
        c-=mini;
        m-=mini;
            if(c+m+x>=mini){
                printf("%d\n",mini);
            }
            else    printf("%d\n",mini-(mini-c-m-x+2)/3);
    }
}
