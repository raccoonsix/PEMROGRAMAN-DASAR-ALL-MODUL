data = input().split()
if len(data) == 6:
    a, b, i, j, x, y = map(float, data)
else:
    a, b = map(float, data)
    i, j = map(float, input().split())
    x, y = map(float, input().split())

hasil = (a - b) * (i / j) - (x + y)
print("%.3f" % hasil)