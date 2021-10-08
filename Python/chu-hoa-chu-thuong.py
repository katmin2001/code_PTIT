chuoi = input()
chuhoa = 0
chuthuong = 0
for i in range(len(chuoi)):
    if chuoi[i]<="Z" and chuoi[i]>="A":
        chuhoa += 1
    else: chuthuong += 1
if chuhoa <= chuthuong:
    chuoi = chuoi.lower()
else: chuoi = chuoi.upper()
print(chuoi)
