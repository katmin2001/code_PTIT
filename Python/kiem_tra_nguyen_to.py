import math
def ngto(n):
    n = float(n)
    if n<2 : return 0
    for i in range(2, math.sqrt(n)+1):
        if n%i == 0: return 0
    return 1

x = input()
x = x.split()
hang = int(x[0])
cot = int(x[1])
a = []
for i in range(hang):
    a.append([])
    for j in range(cot):
        x = int(input(% (i,j)))
        a[i].append(x)
for i in range(hang):
    for j in range(cot):
        a[i][j] = ngto(a[i][j])
print(a)