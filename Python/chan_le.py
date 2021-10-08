def check1(n):
    n = int(n)
    s = 0
    while n > 0:
        s = s + n%10
        n = int(n/10)
    if s % 10 == 0: return 1
    else: return 0
def check2(n):
    n = str(n)
    for i in range(len(n)-1):
        if abs(int(n[i])-int(n[i+1]))!=2:
            return 0
    return 1

for t in range(int(input())):
    so = input()
    if check1(so)==1 and check2(so)==1:
        print("YES")
    else: print("NO")
