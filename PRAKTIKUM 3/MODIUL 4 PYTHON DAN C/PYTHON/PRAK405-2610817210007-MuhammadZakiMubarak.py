data = input().split()
if len(data) < 2:
    data += input().split()

n = int(data[0])
multiple = int(data[1])

total = 0
for i in range(1, n + 1):
    term = []
    number_rows = 0
    for j in range(i, 0, -1):
        term.append(f"({j} * {multiple})")
        number_rows += j * multiple
    print(" + ".join(term) + f" = {number_rows}")
    total += number_rows

print(total)