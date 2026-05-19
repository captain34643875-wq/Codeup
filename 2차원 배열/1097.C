#include <stdio.h>
#include <stdlib.h>

#define SIZE 19

int main()
{
    int n, i, j, x, y,k,l,o;
    int a[20][20];

    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d", &x, &y);
        for(j=0; j<19; j++)
        {
            if(a[x-1][j]==0) a[x-1][j]=1;
            else a[x-1][j] = 0;
        }
        for(o=0; o<19; o++)
        {
            if(a[o][y-1]==0) a[o][y-1]=1;
            else a[o][y-1] = 0;
        }
    }
    for(k=0;k<SIZE;k++)
    {
        for(l=0;l<SIZE;l++)
            printf("%d ",a[k][l]);
        printf("\n");
    }

    return 0;
}