#include <stdio.h>

long long binary_search(long long target) {
    long long left = 1, right = 2000000000;
    long long result = 0;

    while (left <= right) {
        long long mid = (left + right) / 2;
        if (mid * mid <= target) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}
int main() 
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        long long target;
        scanf("%lld", &target);
        long long answer = binary_search(target);
        printf("%lld\n", answer * answer);
}
    return 0;
}