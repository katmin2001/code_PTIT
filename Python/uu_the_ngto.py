def nto(n):
    n = float(n)
    if n<2 :return 0
    for i in range(2, int(n**0.5)+1):
        if n%i==0: return 0
    return 1
for t in range(int(input())):
    n = input()
    m = len(n)
    dem = 0
    for i in range(0,m):
        if nto(int(n[i]))==1: dem+=1
    if dem>m-dem and nto(m)==1: print("YES")
    else: print("NO")