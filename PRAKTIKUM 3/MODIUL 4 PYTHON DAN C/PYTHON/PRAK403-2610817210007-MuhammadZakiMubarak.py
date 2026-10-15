data = input().split()
if len(data) < 2:
    data += input().split()

a = int(data[0])
b = int(data[1])

step = 1 if a < b else -1
amount = abs(a - b) + 1

hasil = []
for i in range(amount):
    hasil.append(f"{a + i * step} {b - i * step}")

print(" - ".join(hasil))