import math 
# def ucln(a,b):
#     if(b==0): return a
#     return ucln(b,a%b)
n = int(input())
a = [int(i) for i in input().split()]
a.sort()
for i in range(n):
    for j in range(i+1, n):
        # t = ""
        if math.gcd(a[i],a[j]) == 1:
            # t+=str(a[i])+" "+str(a[j])
            # print(t)
            print(a[i],a[j])
