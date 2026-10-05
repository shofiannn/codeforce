n = int(input())
p = list(map(int, input().split()))

jawaban = [0] * n

for x in range(n):
    jawaban[p[x] - 1] = x + 1

print(*jawaban)