for t in range(int(input())):
    n = input()
    s = 0
    t = []
    for i in range(0, len(n)):
        if n[i]<="9"and n[i]>="0":
            s+=int(n[i])
        else: t.append(n[i])
    
    t.sort()
    for i in t:
        print(i,end="")
    print(s)