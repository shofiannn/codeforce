a = list(map(int, input().split()))
sameShoes = 0
for x in range(len(a)):
    if x < len(a) - 1:
        for j in range(len(a)):
            if (x + j + 1) < len(a):
                if a[x] == a[x + j + 1]:
                    sameShoes += 1
                    break

print(sameShoes)
"""
1233
1222
1111

x = 0 -> j = 1, 2, 3
x = 1 -> j = 2, 3
x = 2 -> j = 3
len(a) = 4

1 -> 1
2 -> 2
3 -> 3
4 -. 
"""