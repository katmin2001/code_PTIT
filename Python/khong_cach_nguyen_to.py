import math
def nto(n):
    n = float(n)
    if n < 2 : return 0
    for i in range(2,int(math.sqrt(n))+1):
        if n%i == 0: return 0
    return 1
a = []
for i in range(2,10000):
    if nto(i):
        a.append(i)
# print(a)
n,x = map(int, input().split())
b = ""
b += str(x) + " "
t = x
for i in range(0,n):
    t = t + a[i]
    b+=str(t) + " "
print(b)
