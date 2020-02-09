#include<bits/stdc++.h>
using namespace std;
typedef struct rect{
    int lb[2];
    int rt[2];
    int lt[2];
    int rb[2];
}Rect;
Rect B,b,W;
int inRect(int p[2],Rect r){
    if(p[0]>=r.lb[0]&&p[1]>=r.lb[1]&&p[0]<=r.rt[0]&&p[1]<=r.rt[1]){
        return 1;
    }
    else    return 0;
}
int main(){
    cin>>W.lb[0]>>W.lb[1]>>W.rt[0]>>W.rt[1];
    cin>>B.lb[0]>>B.lb[1]>>B.rt[0]>>B.rt[1];
    cin>>b.lb[0]>>b.lb[1]>>b.rt[0]>>b.rt[1];
    B.lt[0]=B.lb[0];
    B.lt[1]=B.rt[1];
    B.rb[0]=B.rt[0];
    B.rb[1]=B.lb[1];
    b.lt[0]=b.lb[0];
    b.lt[1]=b.rt[1];
    b.rb[0]=b.rt[0];
    b.rb[1]=b.lb[1];
    W.lt[0]=W.lb[0];
    W.lt[1]=W.rt[1];
    W.rb[0]=W.rt[0];
    W.rb[1]=W.lb[1];

    int Wlb=0,Wrt=0,Wlt=0,Wrb=0;
    if(inRect(W.lb,B))  Wlb=1;
    if(inRect(W.rt,B))  Wrt=1;
    if(inRect(W.lt,B))  Wlt=1;
    if(inRect(W.rb,B))  Wrb=1;
    if(Wlb*Wrt*Wlt*Wrb==1){
        printf("NO");
        return 0;
    }
    if(inRect(W.lb,b))  Wlb=2;
    if(inRect(W.rt,b))  Wrt=2;
    if(inRect(W.lt,b))  Wlt=2;
    if(inRect(W.rb,b))  Wrb=2;
    if(Wlb*Wrt*Wlt*Wrb==0){
        printf("YES");
        return 0;
    }
    if(Wlb*Wrt*Wlt*Wrb==16){
        printf("NO");
        return 0;
    }
    if(Wlb==1&&Wlt==1&&Wrb==2&&Wrt==2){
        if(B.rb[0]>=b.lb[0]){
            printf("NO");
            return 0;
        }
        else{
            printf("YES");
            return 0;
        }
    }
    if(Wlb==2&&Wlt==2&&Wrb==1&&Wrt==1){
        if(B.lb[0]<=b.rb[0]){
            printf("NO");
            return 0;
        }
        else{
            printf("YES");
            return 0;
        }
    }
    if(Wlb==1&&Wrb==1&&Wlt==2&&Wrt==2){
        if(B.rt[1]>=b.rb[1]){
            printf("NO");
            return 0;
        }
        else{
            printf("YES");
            return 0;
        }
    }
    if(Wlb==2&&Wrb==2&&Wlt==1&&Wrt==1){
        if(B.rb[1]<=b.rt[1]){
            printf("NO");
            return 0;
        }
        else{
            printf("YES");
            return 0;
        }
    }

}
