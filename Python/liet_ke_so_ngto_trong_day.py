import math
def nto(n):
    n = float(n)
    if n < 2 : return 0
    for i in range(2,int(math.sqrt(n))+1):
        if n%i == 0: return 0
    return 1
n = int(input())
a = [int(i) for i in input().split()]

for i in range(n):
    if nto(a[i]) ==1:
        dem = 1
        for j in range(i+1, n):
            if a[j]==a[i]:
                dem+=1
                a[j]=-1
        print(a[i],dem)