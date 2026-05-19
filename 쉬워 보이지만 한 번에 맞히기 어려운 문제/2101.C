#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n);
    int a;
    float b;
    a = (int)n;

    b = (float)sqrt(a);
    printf("%lf", (double)a - b);

    return 0;
}