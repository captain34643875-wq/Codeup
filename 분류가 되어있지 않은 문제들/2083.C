#include <stdio.h>

int binary_search(int list[], int n, int target);

int main()
{
    int n, s, i;
    int list[1000000];
    
    scanf("%d %d", &n, &s);  // n과 찾을 값 s 입력
    
    for(i = 0; i < n; i++)
        scanf("%d", &list[i]);  // n개의 숫자 입력
    
    int result = binary_search(list, n, s);
    printf("%d\n", result);
    
    return 0;
}

int binary_search(int list[], int n, int target)
{
    int left = 0, right = n - 1, mid;
    
    while(left <= right)
    {
        mid = (left + right) / 2;
        
        if(target == list[mid])
            return mid + 1;  // 위치는 1부터 시작 (0-based index가 아님!)
        else if(target > list[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}