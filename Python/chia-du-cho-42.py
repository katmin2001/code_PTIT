a = []
s = set()
for i in range(10):
    n = int(input())
    a.append(n)
for i in a:
    s.add(i%42)
print(len(s))