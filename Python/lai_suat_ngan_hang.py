for t in range(int(input())):
    a = [float(i) for i in input().split()]
    n = a[0]
    x = a[1]/100
    m = a[2]
    t = n
    dem = 0
    while t<m:
        t = t * (1+x)
        dem+=1
    print(dem)
