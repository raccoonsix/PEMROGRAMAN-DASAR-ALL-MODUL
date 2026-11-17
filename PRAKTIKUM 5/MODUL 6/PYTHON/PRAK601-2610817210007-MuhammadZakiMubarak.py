line, column = map(int, input().split())
number = list(map(int, input().split()))

for i in range(line):
    print(*number[i * column:(i + 1)* column])