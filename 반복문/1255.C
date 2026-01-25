#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    
    for (double i = a; i <= b + 0.001; i += 0.01) 
    {
        printf("%.2f ", i);
    }
    
    return 0;
}