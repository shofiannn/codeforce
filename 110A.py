y = input()
poin = 0
for x in y:
    if x == '4':
        poin += 1
    elif x == '7':
        poin += 1

if poin == 4 or poin == 7:
    print("YES")
else:
    print("NO")