import math
for t in range(int(input())):
    n = input()
    t = ""
    for i in range(0, len(n)):
        t = n[i] + t
    if math.gcd(int(n),int(t)) == 1: print("YES")
    else: print("NO")