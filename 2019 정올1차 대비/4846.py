N = int(input())
A=[]
total = 0
for i in range(N):
    a, b = map(int, input().split())
    A.append((a, b))

for j in range(N):
    a, b = A[j]
    total += (b % a)
print(total)