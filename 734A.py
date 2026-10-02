babak = int(input())
kata = input()
a = 0
d = 0
for x in range(babak):
    if kata[x] == "A":
        a += 1
    elif kata[x] == 'D':
        d += 1

if a > d:
    print("Anton")
elif a < d:
    print("Danik")
elif a == d:
    print("Friendship")