import math

base = 5
height = 12
slant = math.sqrt ((base * base) + (height * height))
circumference = base + height + slant
area = (base * height) / 2

print("diketahui : ")
print("alas = %d" % base)
print("tinggi = %d" % height)

print("\nJawab : ")
print("Sisi A = %d" % base)
print("Sisi B = %d" % height)
print("Sisi c = %d" % slant)

print("keliling = %d" % circumference)
print("luas = %d" % area)
