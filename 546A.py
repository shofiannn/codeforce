k, n, w = map(int, input().split())
x = 1
pisang = 0
while x <= w:
    pisang += k * x
    x += 1

pinjam = 0
if n < pisang:
    pinjam += pisang - n
elif n == pisang or n > pisang:
    pinjam = 0

print(pinjam)