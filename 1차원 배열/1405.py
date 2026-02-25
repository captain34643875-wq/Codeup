n = int(input())
arr = list(map(int, input().split()))

for _ in range(n):
    print(' '.join(map(str, arr)) + ' ')
    first = arr.pop(0)     # 첫 번째 요소를 꺼내서
    arr.append(first)      # 맨 뒤에 붙입니다