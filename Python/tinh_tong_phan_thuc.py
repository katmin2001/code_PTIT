for t in range(int(input())):
    n = int(input())
    s = 0
    if n%2==1:
        for i in range(1,n+2,2):
            s += float(1/i)
    else:
        for i in range(2,n+2,2):
            s += float(1/i)
    print(f'{s:.6f}')