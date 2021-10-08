def nto(n):
    n = float(n)
    if n<2 :return 0
    for i in range(2, int(n**0.5)+1):
        if n%i==0: return 0
    return 1
for t in range(int(input())):
    n = input()
    m = len(n)
    dau = n[0]+n[1]+n[2]
    cuoi = n[m-3] +n[m-2]+n[m-1]
    # print(dau,cuoi)
    if nto(int(dau))==1 and nto(int(cuoi))==1:
        print("YES")
    else: print("NO")