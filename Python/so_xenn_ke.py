def kenzy(n):
    if len(n)%2==0: return 0
    if n[0]==n[1]: return 0
    else:
        for i in range(0,len(n)-2,2):
            if n[i]!=n[i+2]: return 0
    return 1
for t in range(int(input())):
    n = input()
    if kenzy(n)==1: print("YES")
    else: print("NO")