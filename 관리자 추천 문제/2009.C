#include <stdio.h>

int main()
{
    int K, N;
    int count = 0;
    scanf("%d %d", &K, &N);
    while(K >= N)
    {
        count += K / N;
        K = K / N + K % N;
    }
    printf("%d", count);
    return 0;
}