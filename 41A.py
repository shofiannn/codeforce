benar = input()
kebalik = input()
jir = []
panjang1 = len(kebalik)
panjang2 = len(benar)
poin = 0
if panjang1 == panjang2:
    for x in range(panjang1 - 1, -1, -1):
        jir.append(kebalik[x])

    for x in range(len(benar)):
        if benar[x] != jir[x]:
            poin += 1

    if poin == 0:
        print("YES")
    elif poin > 0:
        print("NO")
elif panjang2 != panjang1:
    print("NO")