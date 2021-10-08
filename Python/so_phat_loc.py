test = int(input())
for i in range(test):
    so = input()
    n  = len(so)
    t = so[n-2:n]
    if t == "86":
        print("YES")
    else: print("NO")
    print("\n")