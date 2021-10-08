import math
# def nto(n):
#     n = float(n)
#     if n<2 :return 0
#     for i in range(2, int(n**0.5)+1):
#         if n%i==0: return 0
#     return 1
n,k = map(int, input().split())
dem = 0
for i in range(10**(k-1),10**k):
    if math.gcd(n,i)==1: 
        print(i,end=" ")
        dem+=1
    if dem==10: 
        print()
        dem = 0