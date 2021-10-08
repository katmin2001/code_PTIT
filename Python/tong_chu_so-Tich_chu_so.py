def ktra(n):
    for i in range(0, len(n)):
        if i%2==0 and n[i] != "0":
            return 1
    return 0
for t in range(int(input())):
    n = input()
    s = 0
    tich = 1
    for i in range(0,len(n)):
        if i%2==1: s+=int(n[i])
    
    if ktra(n)==1: 
        for i in range(0,len(n)):
            if i%2==0 and n[i]!="0": tich*=int(n[i])
            
    else: tich = 0
    print(tich,end=" ")
    print(s)