value = input().split()
if len(value) == 2:
    r = float(value[0])
    t = float(value[1])
else: 
    r = float(value[0])
    t = float(input())

phi = 22/7
volume = phi * (r ** 2) * t
area = 2 * phi * r * (r + t)
circumference = 2 * phi * r

print(f"Volume: {volume:.2f}")
print(f"Luas: {area:.2f}")
print(f"Keliling: {circumference:.2f}")