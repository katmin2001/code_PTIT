def check1(n):
    for i in n:
        if i!="6" and i!="8": return 0
    return 1
def check2(n):
    for i in range(len(n)):
        if n[0]=="8": return 0
        if n[i]=="8" and n[i-1]!="6" and n[i-1]!="8": return 0
        if i>1 and n[i]=="8" and n[i-1]=="8" and n[i-2]!="6": return 0
    return 1
n = input()
if check1(n)==1 and check2(n)==1: print("YES")
else: print("NO")