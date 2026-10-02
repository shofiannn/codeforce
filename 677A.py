n, h = map(int, input().split())
a  = list(map(int, input().split()))
poin = 0
for x in range(n):
    if h >= a[x]:
        poin += 1
    elif h < a[x]:
        poin+= 2

print(poin)