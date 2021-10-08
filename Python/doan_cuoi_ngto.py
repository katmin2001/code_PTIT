def nto(n):
    n = float(n)
    if n<2 : return 0
    for i in range(2,int(n**0.5)+1):
        if n%i==0: return 0
    return 1

for t in range(int(input())):
    n = input()
    a = len(n)
    b =n[a-4]+n[a-3]+n[a-2]+n[a-1]
    if nto(int(b))==1: print("YES")
    else: print("NO")