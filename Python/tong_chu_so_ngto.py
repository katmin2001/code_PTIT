import math
def nto(n):
    n = float(n)
    if n<2: return 0
    for i in range(2, int(math.sqrt(n))+1):
        if n % i == 0: return 0
    return 1

for t in range(int(input())):
    n = input()
    s = 0

    for i in n:
        s += int(i)

    if nto(s)==1: print("YES")
    else: print("NO")