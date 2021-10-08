test = int(input())
for a in range(test):
    chuoi = input()
    newlist = list(chuoi)
    newlist.reverse()
    chuoi2 = ''.join(newlist)
    check=1
    for x in range(len(chuoi)) :
        if abs(ord(chuoi[x-1])-ord(chuoi[x])) != abs(ord(chuoi2[x-1])-ord(chuoi2[x])):
            check=0
            break
    if check == 1:
        print("YES")
    else : print("NO")
            