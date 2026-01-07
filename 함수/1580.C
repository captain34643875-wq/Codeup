#include <stdio.h>

double circle(int r)
{
    return 3.14 * r * r;
}
main()
{
    int r;
    scanf("%d", &r);
    printf("%.2f", circle(r));
}