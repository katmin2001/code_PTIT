s = "jhsiaf123j=-=AJDD"
thuong, hoa, so ,kitu = 0,0,0,0
for i in s:
    if i>="a" and i <="z":
        thuong += 1
    elif i>="A" and i <="Z":
        hoa += 1
    elif i>= "0" and i <= "9":
        so += 1
    else:
        kitu += 1
print(thuong)
print(hoa)
print(so)
print(kitu)

# so = int(input())
# so = so % 2
# if so == 0:
#     print("CHAN")
# else:
#     print("LE")

# chuoi = "la sv ptit la ptit"
# la = chuoi.count("la",0,len(chuoi))
# print(la)
# sv = chuoi.count("sv",0,len(chuoi))
# print(sv)
# ptit = chuoi.count("ptit",0,len(chuoi))
# print(ptit)

# chuoi = "abcdef"
# chuoi = chuoi[::-1]
# print(chuoi)