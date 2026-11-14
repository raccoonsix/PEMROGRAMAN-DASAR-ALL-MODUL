# PRAK605 - Perkalian dua matriks persegi
import sys

data = sys.stdin.read().split()
n = int(data[0])
nilai = list(map(int, data[1:1 + 2 * n * n]))

A = [nilai[i * n:(i + 1) * n] for i in range(n)]
B = [nilai[n * n + i * n:n * n + (i + 1) * n] for i in range(n)]

C = [[0] * n for _ in range(n)]
for i in range(n):
    for j in range(n):
        for k in range(n):
            C[i][j] += A[i][k] * B[k][j]

for baris in C:
    print(*baris)