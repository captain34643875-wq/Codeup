n = int(input())
A = list(map(int, input().split()))

up = False
down = False

for i in range(n - 1):
    if A[i] < A[i + 1]:
        up = True
    elif A[i] > A[i + 1]:
        down = True

if up and down:
    print("섞임")
elif up:
    print("오름차순")
elif down:
    print("내림차순")
else:
    print("섞임")
