#include <stdio.h>

long long counter = 0;

void hanoi(int n, char from, char tmp, char to)
{
    if (n == 1)
    {
        counter++;
        return;
    }
    hanoi(n - 1, from, to, tmp);
    counter++;
    hanoi(n - 1, tmp, from, to);
}

int main()
{
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    printf("%lld\n", counter);
    return 0;
}
