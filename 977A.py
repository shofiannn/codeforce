k, n = map(int, input().split())
i = 0
while i < n:
    if k % 10 == 0:
        k /= 10
    elif k % 10 != 0:
        k -= 1
    i += 1

print(int(k))