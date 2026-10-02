jarak = int(input())
i = 0
langkah = 0
while i < 10000:
    for j in range(5, 0, -1):
        if jarak // j > 0:
            langkah += (jarak // j)
            jarak = jarak - ((jarak // j) * j)
    i += 1
print(langkah)