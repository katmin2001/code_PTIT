def tcs(n):
    s = 0
    if n[0] == '-': s+=ord('-')-ord('0')
    else: s+=int(n[0])
    for i in range(1,len(n)):
        s+=int(n[i])
    return s

n = input()
dem = 1
if int(n)<10 and int(n)>=0: print("0")
else:
    while tcs(n)>9:
        n = str(tcs(n))
        dem+=1
    print(dem)
