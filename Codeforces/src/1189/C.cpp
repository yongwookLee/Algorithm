#include<stdio.h>
#include<math.h>
int *tree;
int s[100001];
int n;
int init(int index, int start, int end)
{
    if(start == end)
        tree[index] = s[start];
    else
        tree[index] = init(index*2+1, start, (start+end)/2) + init(index*2+2, (start+end)/2 + 1, end);
    return tree[index];
}
int sum(int index, int start, int end, int left, int right)
{
    if( start > right || end < left ) // case 1
        return 0;
    else if( start >= left && end <= right) //case 2
        return tree[index];
    else // other case
    {
        int mid = (start+end)/2;
        return sum(2*index+1, start, mid, left, right) + sum(2*index+2, mid+1, end, left, right);
    }
}
int main(){

    scanf("%d",&n);
    int h = ceil(log2(n));
    int tree_size = 1 << (h+1);
    tree = new int[tree_size];
    for(int i=0;i<n;i++)    scanf("%d",s+i);
    init(0,0,n-1);
    int q;
    scanf("%d",&q);
    for(int k=0;k<q;k++){
        int l,r;
        scanf("%d %d",&l,&r);
        printf("%d\n",sum(0,0,n-1,l-1,r-1)/10);
    }
}
