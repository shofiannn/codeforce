n = int(input())
def fungsi_f(n):
    jawaban = 0
    for x in range(1, n+1, 1):
        if x % 2 == 0:
            jawaban += x
        else:
            jawaban -= x

    print(jawaban)

fungsi_f(n)