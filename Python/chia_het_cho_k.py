chuoi = input()
chuoi = chuoi.split()
a = int(chuoi[0])
K = int(chuoi[1])
N = int(chuoi[2])
n = int(N/K)
b = N-a
hi = ""
for i in range(1,n+1):
    x = K*i-a
    if x<=b and x > 0:
        hi+=str(x)+" "
if len(hi) == 0: print("-1")
else: print(hi)