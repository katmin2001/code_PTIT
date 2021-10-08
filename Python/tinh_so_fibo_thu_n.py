def fibo(n):
    f0 = 0
    f1 = 1
    fn = 1
    if(n<0):
        return -1
    elif (n == 0 or n == 1):
        return n
    else:
        for i in range(2,n):
            f0 = f1
            f1 = fn
            fn = f0 + f1
        return fn
test = int(input())
for a in range(test):
    chuoi = input()
    chuoi = chuoi.split()
    # print(chuoi)
    x = int(chuoi[0])
    m = int(chuoi[1])
    fb = ""
    for i in range(x,m):
        fb = fb + str(fibo(i)) + " "
    print(fb)
