for i in range(int(input())):
    so = input()
    check = 1
    for j in range(len(so)):
        if so[j]!="4" and so[j]!="7" :
            check = 0
    if check == 1: print("YES")
    else: print("NO")