#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qx,i,j,k,l,m,n,x,y;

    scanf("%d %d %d %d",&m,&n,&x,&y);

    int a[m][n];

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<=m-x;i++)
    {
        for(j=0;j<=n-y;j++)
        {
            int s=0;
            for(k=i;k<x+i;k++)
            {
                for(l=j;l<y+j;l++)
                {
                    s+=a[k][l];
                }
            }
                if(qx<s)
                {
                    qx=s;
                }
        }

    }
    printf("%d",qx);

    return 0;
}