#include<bits/stdc++.h>
int cnt[12];    //1 2 4 8 16 32 64 128 256 512 1024 2048
int main(){
    int q;
    scanf("%d",&q);
    for(int u=0;u<q;u++){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            int tmp;
            scanf("%d",&tmp);
            if(tmp==1)  cnt[0]++;
            if(tmp==2)  cnt[1]++;
            if(tmp==4)  cnt[2]++;
            if(tmp==8)  cnt[3]++;
            if(tmp==16)  cnt[4]++;
            if(tmp==32)  cnt[5]++;
            if(tmp==64)  cnt[6]++;
            if(tmp==128)  cnt[7]++;
            if(tmp==256)  cnt[8]++;
            if(tmp==512)  cnt[9]++;
            if(tmp==1024)  cnt[10]++;
            if(tmp==2048)  cnt[11]++;
        }
        for(int i=0;i<11;i++){
            cnt[i+1]+=(cnt[i]/2);
        }
        if(cnt[11]){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        for(int i=0;i<12;i++)cnt[i]=0;
    }
}
