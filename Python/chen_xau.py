n = input()
m = input()
t = int(input())
n = n[:t-1]+m+n[t-1:]
print(n)