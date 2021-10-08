a = input()
b = input()
if len(a) < len(b):
    tmp = a
    a = b
    b = tmp
t = ""

if len(a)>len(b):
    x = 0
    for i in range(len(a)-1,len(a)-len(b)-1,-1):
        x = x + int(a[i]) + int(b[i-len(b)])
        if x >= 10:
            x = x%10
            t = str(x) + t
            x = 1
        else:
            t = str(x) + t
            x = 0
    if x == 1:
        t = str(int(a[len(a)-len(b)-1])+1) + t
    for i in range(len(a)-len(b)-2,0,-1):
        t = a[i] + t
print(t)
