
for i in range(int(input())):
    so = input()
    n = len(so)
    x1 = so[0:2]
    x2 = so[n-2:n]
    # print(n)
    if x1==x2:
        print("YES")
    else: print("NO")