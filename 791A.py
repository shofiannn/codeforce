a, b = map(int, input().split())
i = 1
while i < 10:
    a = a * (3 ** 1)
    b = b * (2 ** 1)
    if a > b:
        break
    i += 1

print(i)