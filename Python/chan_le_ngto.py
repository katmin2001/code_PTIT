def nto(n):
    n = float(n)
    if n<2 :return 0
    for i in range(2, int(n**0.5)+1):
        if n%i==0: return 0
    return 1
def check1(n):
    for i in range(len(n)):
        if (i%2==0 and int(n[i])%2!=0):
            return 0
    return 1
def check2(n):
    for i in range(len(n)):
        if (i%2==1 and int(n[i])%2!=1):
            return 0
    return 1
for t in range(int(input())):
    n = input()
    s = 0
    for i in n:
        s+=int(i)
    if check1(n)==1 and nto(s) == 1 and check2(n)==1: print("YES")
    else: print("NO") 