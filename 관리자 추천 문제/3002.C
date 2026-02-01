#include <stdio.h>
int list[1000000];
int list2[100000];
int binary_search(int list[], int n, int target)
{
    int left=0, right=n-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(list[mid]==target)
            return mid;
        else if(list[mid]<target)
            left=mid+1;
        else
            right=mid-1;
    }
    return -1;
}
int main()
{
    int N,M,i,j;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
        scanf("%d",&list[i]);
    scanf("%d",&M);
    
    for(i=0;i<M;i++)
    {
        scanf("%d",&list2[i]);
    }
    int idx = binary_search(list,N,list2[i]);
    for(j=0;j<M;j++)
    {
        idx = binary_search(list,N,list2[j]);
        if(idx != -1)
            printf("%d ",idx+1);
        else
            printf("-1 ");
    }
}