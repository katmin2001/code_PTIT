n = int(input())
a = [int(i) for i in input().split()]
for i in range(0, len(a)):
    if a[i]%2==1:
        for j in range(0, len(a)):
            if a[j]%2==1 and a[j]<a[i]:
                tmp = a[i]
                a[i] = a[j]
                a[j] = tmp
    else:
        for j in range(0, len(a)):
            if a[j]%2==0 and a[j]>a[i]:
                tmp = a[i]
                a[i] = a[j]
                a[j] = tmp
for i in a:
    print(i,end=" ") 
                
