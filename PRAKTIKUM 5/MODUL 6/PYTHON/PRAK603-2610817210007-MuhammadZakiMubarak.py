# PRAK603 - Perkalian baris 1 dan baris 2
n1, n2 = map(int, input().split())

if n1 != n2:
    print("Jumlah Tidak Sama")
else:
    line1 = list(map(int, input().split()))
    line2 = list(map(int, input().split()))
    print(*[line1[i] * line2[i] for i in range(n1)])