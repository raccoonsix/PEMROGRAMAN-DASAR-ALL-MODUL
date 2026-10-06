def baca(n):
    data = []
    while len(data) < n:
        data += input().split()
    return data
 
a, b, i, j, x, y = map(float, baca(6))
 
hasil = (a - b) * (i / j) - (x + y)
print(f"{hasil:.3f}")