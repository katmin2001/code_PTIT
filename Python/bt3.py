# list = [1,5,1,8,4,1,4,3,2,8,4,9]
# b = set(list)
# for i in b:
#     if list.count(i) >= 3:
#         print(i)

# l = ['python', 'hihi', 'Python']
# for i in l:
#     x = i[:1]
#     if x == "p" or x == "P":
#         print(i)
# import math
# def nto(n):
#     n = float(n)
#     if n<2: return 0
#     for i in range(2, int(math.sqrt(n))+1):
#         if n%i==0: return 0
#     return 1
# def b3():
#     l = [int(i) for i in input().split()]
#     dem = 0
#     for i in l:
#         if(nto(i)==1): dem+=1
#     print(dem)

# def b4():
#     l = [int(i) for i in input().split()]
#     a = []
#     s = 0
#     for i in l:
#         s = s + i
#         a.append(s)
#     print(a)
# b3()
# b4()
# l = ["www.alo.com","www.alo.vn","www.alo.org","www.alo.net"]
# a = []
# for i in l:
#     n = len(i)
#     hi = ""
#     for j in range(n-1,0,-1):
#         # print(j)
#         if i[j] == ".": break
#         else: hi = i[j] + hi
#     a.append(hi)
# print(a)
def b7():
    l = [i for i in input().split()]
    dem = 0
    for i in l:
        if len(i) > 2 and i[0] == i[-1]:
            dem +=1
    print(dem)
b7()
def b8():
    l = ["a","b"]
    n = 4
    hi = []
    for i in range(1,n+1):
        for j in l:
            x = j + str(i)
            hi.append(x)
    print(hi)
b8()