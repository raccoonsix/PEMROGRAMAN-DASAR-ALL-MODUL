n = int(input())
white_zetsu = list(map(int, input().split()))

result = []

for i in range(n):
    result.append(white_zetsu[i] * (i + 1))

print(*result)