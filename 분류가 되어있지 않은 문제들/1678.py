a = [list(map(int, input().split())) for _ in range(5)]

max_sum = 0

# 3x3 시작 위치
for i in range(3):        # 0 ~ 2
    for j in range(3):    # 0 ~ 2
        s = 0
        # 3x3 합 계산
        for x in range(3):
            for y in range(3):
                s += a[i + x][j + y]
        max_sum = max(max_sum, s)

print(max_sum)
