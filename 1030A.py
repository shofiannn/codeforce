n = int(input())
a = list(map(int, input().split()))
susah = 0
for x in range(n):
    if a[x] == 1:
        susah += 1

if susah == 0:
    print("EASY")
else:
    print("HARD")