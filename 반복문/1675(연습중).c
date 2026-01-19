#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') {
        c = (c - 'A' + 3) % 26 + 'A';
    }
    

    printf("%c", c);
    return 0;
}