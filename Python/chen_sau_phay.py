so = input()
i = len(so)-1
dem = 0
t = ""
while 1:
    dem+=1
    t = so[i] + t
    if i==0: break
    if dem==3:
        t =',' + t
        dem = 0
    i-=1
print(t)