#include <stdio.h>

int main()
{
    int n,m,k,i;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++)
    {
        for(k=0;k<m;k++)
        {
            printf("%d*%d=%d ", i+1, k+1, (i+1)*(k+1));
        }
    }
    return 0;
}