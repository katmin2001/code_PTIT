def nto(n):
    n = float(n)
    if n<2 : return 0
    for i in range(2,int(n**0.5)+1):
        if n%i==0: return 0
    return 1

for t in range(int(input())):
    n = input()
    check = 1
    for i in range(0, len(n)):
        if (nto(i)==1 and nto(n[i])==0) or  (nto(i)==0 and nto(n[i])==1):
            check = 0
            break
    if check == 1: print("YES")
    else: print("NO")