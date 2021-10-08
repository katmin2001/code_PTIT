def thuannghich(n):
    n = str(n)
    if len(n)==1: return 0
    a = [int(i) for i in n]
    b = a.copy()
    b.reverse()
    if a==b: return 1
    else: return 0
for test in range(int(input())):
    so = input()
    s = 0
    for i in range(len(so)):
        s += int(so[i])
    # print(s)
    if thuannghich(s) == 1 : print("YES")
    else: print("NO")