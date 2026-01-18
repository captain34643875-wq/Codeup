#include <stdio.h>

int f(int a,int b)
{
    if (a>b)
        return;
    else if(a%2==1)
        printf("%d ", a);
    f(a+1,b);
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    f(a,b);
    return 0;
}