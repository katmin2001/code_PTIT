for t in range(int(input())):
    a,b = map(int, input().split())
    arr = []
    arr.append(1)
    arr.append(1)
    for i in range(2, 93):
        t = arr[i-1] + arr[i-2]
        arr.append(t)
    hi = ""
    for i in range(a-1,b):
        hi+=str(arr[i])+ " "
    print(hi)