n = int(input())
a = [int(i) for i in input().split()]
c = set(a)
t = ""
for i in c:
    t+=str(i)
b = []
for i in range(0,30000):
    b.append(i)
if t[0]=="1":
    for i in range(1,len(c)):
        if int(t[i])!=b[i]:
            print(a[i]+1)
            break
else: print(1)