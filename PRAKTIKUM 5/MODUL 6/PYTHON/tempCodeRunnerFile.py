n = int(input())

print("Matriks A")
A = [list(map(int, input().split())) for _ in range(n)]

print("Matriks B")
B = [list(map(int, input().split())) for _ in range(n)]

C = [[0] * n for _ in range(n)]
for i in range(n):
    for j in range(n):
        for k in range(n):
            C[i][j] += A[i][k] * B[k][j]

print("Matriks AXB")
for baris in C:
    print(*baris)