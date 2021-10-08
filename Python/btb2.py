l = [1,2,3,4,5,6]
n = len(l)
for i in range(n):
    l[i]=l[i]*l[i]
l.sort(reverse=True)
print(l)

ar = [1,"a",34,"a","b",1,"c"]
n = set(ar)
print(len(n))