#include <stdio.h>
void print_binary(int n);

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
    } else {
        print_binary(n);
        printf("\n");
    }
    return 0;
}

void print_binary(int x)
{
    if(x>0)
    {
        print_binary(x/2);
        printf("%d",x%2);
    }    
}