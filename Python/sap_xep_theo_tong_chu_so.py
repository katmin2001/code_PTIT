def tongchuso(n):
    s = 0
    for i in n:
        s += int(i)
    return s
for t in range(int(input())):
    n = int(input())
    a = [str(i) for i in input().split()]
    for i in range(0,n):
        for j in range(0,n):
            if tongchuso(a[i]) < tongchuso(a[j]):
                tmp = a[i]
                a[i] = a[j]
                a[j] = tmp
    for i in range(0,n-1):
        for j in range(i+1,n):
            if tongchuso(a[i]) == tongchuso(a[j]):
                if int(a[i]) > int(a[j]):
                    tmp = a[i]
                    a[i] = a[j]
                    a[j] = tmp
    b = []
    b.append(a[0])
    for i in range(1,n):
        if a[i]!=a[i-1]:
            b.append(a[i])
    for i in b:
        print(i,end=" ")
