s = input()
besar = 0
kecil = 0
for x in s:
    if x == x.upper():
        besar += 1
    elif x == x.lower():
        kecil += 1

if besar > kecil:
    print(s.upper())
elif besar <= kecil:
    print(s.lower())