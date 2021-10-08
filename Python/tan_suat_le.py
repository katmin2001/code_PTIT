for t in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    f = {}
    for i in a:
        if i in f: f[i]+=1
        else: f[i]=1
    for i in a:
        if f[i]%2==1:
            print(i)
            break
# for t in range(int(input())):
#     n = int(input())
#     a = [int(i) for i in input().split()]
#     b = set(a)
#     for i in b:
#         if a.count(i)%2==1:
#             print(i)
#             break