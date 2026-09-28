n = int(input())
warna = input()

ambil = 0
i = 0
while i < n:
    if (i + 1) < n:
        if warna[i] == warna[i + 1]:
            ambil += 1
    i += 1

print(ambil)