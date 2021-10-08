# a = {"ten":"duc anh","MSSV":"B19DCCN043","lop":"D19CQCN07"}
# a["mon"] = "Lap trinh Python"
# print(a)

# list = ['a',1,1,'b',4,4,'a',2]
# b = {}
# for i in list:
#     try:
#         b[i]+=1
#     except:
#         b[i]=1
# print(b)
# a = {}
# for i in range(1,16):
#     a[i]=i**2
# print(a)
# a = {"a":1,"b":2,"c":3,"d":4,"e":"alo"}
# s = 0
# for i in a:
#     if type(a[i])==int:
#         s+=a[i] 
# print(s)
# d1 = {'a':100,'b':200,'c':300}
# d2 = {'a':300,'b':200,'d':400}
# for i in d1.keys():
#     if i in d2.keys():
#         d2[i]+=d1[i]
#     else:
#         d2[i] = d1[i]
# print(d2)
# d = {'a':1,'b':2,'c':3}
# print(max(d.values()))
# print(min(d.values()))

# a={}
# key = ['a','b','c','d']
# value = [1,2,3,4]
# for i in range(0,4):
#     a[key[i]] = value[i]
# print(a)
def nt(n):
    n = float(n)
    if n<2: return 0
    for i in range(2,int(n**0.5)+1):
        if n%i==0: return 0
    return 1
a=[]
for i in range(2,1000):
    if nt(i)==1: a.append(i)
print(a[29])