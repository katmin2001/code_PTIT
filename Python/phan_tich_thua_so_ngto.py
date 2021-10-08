# import math
for t in range(int(input())):
    n = int(input())
    print("1 ", end= "")
    for i in range(2, int(n**0.5)+1):
        if n%i==0:
            dem = 0
            while n%i == 0:
                dem += 1
                n//=i
            print("* "+str(i)+"^"+ str(dem)+" ", end="")
    if n>1: print("* "+str(n)+"^1",end="")
    print()