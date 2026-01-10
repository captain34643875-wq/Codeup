h=[]
for i in range(7):
    num = int(input())
    if(num%2==1):
        h.append(num)
if len(h) == 0:
    print(-1)
else:
    print(sum(h))
    print(min(h))