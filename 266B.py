n, t = map(int, input().split())
kelamin = input()
for x in range(n):
    if kelamin[x] == 'B':
        
        kelamin[x] = kelamin[x + 1]
    elif kelamin[x] == 'G':
        kelamin[x] = kelamin[x - 1]