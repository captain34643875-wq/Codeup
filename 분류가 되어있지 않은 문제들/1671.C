#include <stdio.h>

int main()
{
    int g, c;
    scanf("%d %d", &g, &c);

    // 1. 비김 먼저
    if (g == c)
    {
        printf("tie");
    }
    // 2. 광현이가 이기는 경우
    else if (
        (g == 0 && c == 1) ||
        (g == 1 && c == 2) ||
        (g == 2 && c == 0)
    )
    {
        printf("win");
    }
    // 3. 나머지는 패배
    else
    {
        printf("lose");
    }

    return 0;
}
