for t in range(int(input())):
    a = input()
    b = input()
    c = set(a)
    d = set(b)
    print(f'Test {t+1}: ',end="")
    if len(a)!=len(b): print("NO")
    else:
        check = 1
        for i in range(len(a)):
            if a.count(a[i])!=b.count(a[i]):
                check = 0
                break
        if check==1: print("YES")
        else: print("NO")