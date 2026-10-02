n = int(input())
masuk = []
keluar = []
for i in range(n):
    a, b = map(int, input().split())
    masuk.append(b)
    keluar.append(a)

penumpang = []
stasiunAwal = 0
for x in range(n):
    stasiunSelanjutnya = stasiunAwal - keluar[x] + masuk[x]
    stasiunAwal = stasiunSelanjutnya
    penumpang.append(stasiunAwal)
print(max(penumpang))