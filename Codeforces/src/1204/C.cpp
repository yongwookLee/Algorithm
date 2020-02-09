#include<stdio.h>
#include<algorithm>
#include<list>
using namespace std;
char a[101][101];
list<int> p;
int sh[101][101][101];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",a[i]);
    }
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int tmp;
        scanf("%d",&tmp);
        p.push_back(tmp);
    }
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]=='1') sh[i][j][0]=1;
                else    sh[i][j][0]=10000;
                if(i==j)    sh[i][j][0]=0;
            }
        }
    for(int k=1;k<=n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sh[i][j][k]=min(sh[i][j][k-1],sh[i][k-1][k-1]+sh[k-1][j][k-1]);
            }
        }
    }
    int len=m;
    int t=1;
    list<int>::iterator iter,iter2,it;
        for(iter=p.begin();iter!=p.end();iter++){
            iter2=iter;
            iter2++;if(iter2==p.end())  break;iter2++;if(iter2==p.end())  break;
            it=iter;
            it++;
            for(int i=2;i<len;i++,iter2++){
                if(*iter==(*iter2))  break;
                if(iter2==p.end())  break;
                if(sh[*iter-1][*iter2-1][n]==i){
                    p.erase(it++);
                    len--;
                }
                else it++;
            }
        }
    printf("%d\n",len);
    for(iter=p.begin();iter!=p.end();iter++){
        printf("%d ",*iter);
    }

}
