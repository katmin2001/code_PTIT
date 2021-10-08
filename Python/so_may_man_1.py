so = input()
cs4 = 0
cs7 = 0
for i in range(len(so)):
    if so[i]=="4":
        cs4+=1
    elif so[i]=="7":
        cs7+=1
cs = cs4+cs7
if cs == 4 or cs == 7: print("YES")
else: print("NO")