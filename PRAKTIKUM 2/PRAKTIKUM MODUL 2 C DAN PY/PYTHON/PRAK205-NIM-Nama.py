# PRAK205 - Segitiga Pythagoras (Python)
import math

def baca(n):
    data = []
    while len(data) < n:
        data += input().split()
    return data

A, B = map(float, baca(2))

if B <= A:
    print("Input salah: B (sisi miring) harus lebih besar dari A")
else:
    alas = math.sqrt(B * B - A * A)
    tinggi = A
    keliling = alas + tinggi + B
    luas = alas * tinggi / 2

    print(f"Alas = {alas:.10g} cm")
    print(f"Tinggi = {tinggi:.10g} cm")
    print(f"Keliling = {keliling:.10g} cm")
    print(f"Luas = {luas:.10g} cm^2")