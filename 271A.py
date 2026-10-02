y = input()
Y = int(y)
for i in range(9000):
    Y += 1
    y = str(Y)
    jir = []
    for x in y:
        if x not in jir:
            jir.append(x)
        elif x in jir:
            jir.clear()
    if len(jir) == 4:
        break

print(Y)