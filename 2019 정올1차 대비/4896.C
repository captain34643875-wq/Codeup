#include <stdio.h>

int main()
{
    int x1,x2,y1,y2,x3,y3,x4,y4;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    scanf("%d %d %d %d",&x3,&y3,&x4,&y4);
    if(x1==x3 && y1==y3)
        printf("%d %d",x4,y4);
    else if(x1==x4 && y1==y4)
        printf("%d %d",x3,y3);
    else if(x2==x3 && y2==y3)
        printf("%d %d",x4,y4);
    else
        printf("%d %d",x3,y3);
    return 0;
}