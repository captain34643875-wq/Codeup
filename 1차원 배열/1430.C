#include <stdio.h>

int check[10000001];

int main()
{
    int N, M;
    int x;

    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &x);
        check[x] = 1;
    }

    scanf("%d", &M);

    for(int i = 0; i < M; i++)
    {
        scanf("%d", &x);
        printf("%d ", check[x]);
    }

    return 0;
}


