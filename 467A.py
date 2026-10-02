n = int(input())
kapasitasKamar = []
orangYangTinggal = []
opsiKamar = 0
for x in range(n):
    p, q = list(map(int, input().split()))
    orangYangTinggal.append(p)
    kapasitasKamar.append(q)
    if kapasitasKamar[x] - orangYangTinggal[x] >= 2:
        opsiKamar += 1

print(opsiKamar)


