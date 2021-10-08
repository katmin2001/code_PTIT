for test in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    b = set(a)
    check = 0
    for i in b:
        if a.count(i) > float(n)/2:
            check = 1
            print(i)
            break
    if check == 0: print("NO")