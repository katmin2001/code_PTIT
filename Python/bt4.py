# def b1():
#     diem = float(input())
#     if diem >= 0 and diem < 4: print("D")
#     elif diem >= 4 and diem < 6: print("C")
#     elif diem >= 6 and diem < 8.5: print("B")
#     else: print("A")
# def b2():
#     a = [int(i) for i in input().split()]
#     chan = 0
#     le = 0
#     for i in a:
#         if i%2==0: chan+=1
#         else: le+=1
#     print(chan)
#     print(le)
# b1()
# b2()
# def b3():
#     a = [1,3,5,10,15,20,150,155]
#     for i in a:
#         if i>150:break
#         elif i%5==0: print(i,end=" ")
#     print()
# def b4():
#     for i in range(1,10):
#         if i==1: print("1st")
#         elif i==2: print("2nd")
#         elif i==3: print("3rd")
#         else:
#             print(f'{i}th')
# b3()
# b4()
# def b5():
#     chuoi = input()
#     print(chuoi[0],end="")
#     for i in range(1,len(chuoi)):
#         if chuoi[i] == chuoi[0]: print("$",end="")
#         else: print(chuoi[i],end="")
#     print()
# def b6():
#     a = [10,20,55,60,70]
#     dem = 0
#     for i in a:
#         if i%10==0: dem+=1
#     print(dem)
# b5()
# b6()
# def b7():
def b8():
    a = input()
    a.replace("."," ")
    a.replace(","," ")
    a = a.split()
    b = set(a)
    for i in b:
        if a.count(i)>=3: print(i,end=" ")
    print()
b8()
def b7():
    a = input()
    b = []
    for i in range(len(a)):
        if i%2==0:
            print(a[i],end="")
b7()