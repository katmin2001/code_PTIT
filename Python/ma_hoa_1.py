for i in range(int(input())):
    chuoi = input()
    n = len(chuoi)
    hi = ""
    dem = 1
    for i in range(1,n):
        if chuoi[i] == chuoi[i-1]:
            dem += 1
        else:
            hi += str(dem) + chuoi[i-1]
            dem = 1
    hi += str(dem) + chuoi[i]
    # i = 0
    # while i<n:
    #     dem = 0
    #     a = chuoi[i]
    #     while i<n and a == chuoi[i]:
    #         dem += 1
    #         i += 1
    #     hi += str(dem) + a
    print(hi)