test = int(input())
for i in range(test):
    chuoi = input()
    n = len(chuoi)
    str = ""
    for j in range(n):
        if chuoi[j] <='Z' and chuoi[j] >= 'A':
            x = int(chuoi[j+1])
            for t in range(x):
                str+=chuoi[j]
    print(str)
                