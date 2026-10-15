data = input().split()
if len(data) < 2:
    data += input().split()

multiple = int(data[0])
symbol = data[1]

result = []
for i in range(1, 51):
    if i % multiple == 0:
        result.append(symbol)
    else:
        result.append(str(i))

print(" ".join(result))