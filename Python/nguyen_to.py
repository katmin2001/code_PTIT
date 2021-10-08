# import math

# def nguyento(n):
#     # n = int(n)
#     if n<2: return 0
#     for i in (2, math.sqrt(n)):
#         if n%i==0:
import math
def ucln(a,b):
    if(b==0): return a
    return ucln(b,a%b)
def ktra(a,b):
    if ucln(a,b)==1:
        return True
    return False
def nto(n):
    n = float(n)
    if n<2: return 0
    for i in range(2, int(math.sqrt(n))+1):
        if n%i==0: return 0
    return 1

for i in range(int(input())):
    n = int(input())
    k = 0
    for j in range(1,n+1):
        if ktra(j,n)==True: k+=1
    if nto(k)==1: print("YES")
    else: print("NO")
