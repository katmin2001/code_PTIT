n = int(input())
a = [float(i) for i in input().split()]
a.sort()
print(a)
dem = 0
s = 0
for i in range(0,n-2):
    if a[i]==a[i+1]: 
        a.pop(i+1)
        dem+=1
    else: s+=a[i]
a.pop(0)
a.pop()
# print(s)
t = s/(n-dem-2)
print(f'{t:.2f}')
