kata = input()
poin1 = 0
poin2 = 0
poin3 = 0

for x in kata:
    if x == "1":
        poin1 += 1
    elif x == "2":
        poin2 += 1
    elif x == "3":
        poin3 += 1

hasil = []
for x in range(poin1):
    hasil.append("1")
for j in range(poin2):
    hasil.append("2")
for h in range(poin3):
    hasil.append("3")

print("+".join(hasil))