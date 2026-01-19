A=[]
B=False
A=list(map(int,input().split()))
for i in range(0,len(A)):
    if(A[i]%5==0):
        B=True
        break
    else:
        B=False
if(B==True):
    print(A[i])
if(B==False):
    print(0)