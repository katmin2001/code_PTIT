import math
def ucln(a,b):
    if(b==0): return a
    return ucln(b,a%b)
def nto(n):
    n = float(n)
    if n<2: return 0
    for i in range(2, int(math.sqrt(n))+1):
        if n%i==0: return 0
    return 1
for i in range(int(input())):
    hi = input()
    hi = hi.split()
    a = int(hi[0])
    b = int(hi[1])
    x = ucln(a,b)
    t = str(x)
    s = 0
    # print(x)
    for i in range(1, len(t)+1):
        s = s + (x % 10)
        x = int(x/10)
    # print(s)
    if nto(s) == 1: print("YES")
    else: print("NO")
    