test = int(input())
for i in range(test):
    so = input()
    check = 1
    for x in range(len(so) - 1):
        if(so[x]>so[x+1]):
            check = 0
            break
    if(check == 1): print("YES")
    else: print("NO")
