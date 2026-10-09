value = input().split()
len(value) == 2 or value.append(input())
A = int(value[0])
B = int(value[1])

base = round((B * B - A * A) ** 0.5)
height = A
around = base + height + B
area = base * height // 2

print("Alas = %d cm" % base)
print("Tinggi = %d cm" % height)
print("keliling = %d cm" % around)
print("Luas = %d cm^2" % area)