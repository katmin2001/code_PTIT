for test in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    b = [int(i) for i in input().split()]
    a.sort()
    b.sort()
    check = 1
    for i in range(n):
        if a[i] > b[i]:
            check = 0
            break
    if check == 1: print("YES")
    else: print("NO")
