streak = 0
total = 0
n = int(input())
a = list(map(int, input().split()))
for i in a:
    if i == 1:
        streak += 1
        total += streak
    else:
        streak = 0
print(total)
