import math
l,r = map(int, input().split())
a = []
for i in range(l,r-1):
    for j in range(i+1, r):
        for x in range(j+1, r+1):
            t = ""
            if math.gcd(i,j)==1 and math.gcd(j,x)==1 and math.gcd(x,i)==1:
                t+="("+str(i)+", "+str(j)+", "+str(x)+")"
                print(t)
