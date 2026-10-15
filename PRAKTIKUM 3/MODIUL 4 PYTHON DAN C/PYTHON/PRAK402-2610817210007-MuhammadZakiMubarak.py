n = int(input())

odd = []
for i in range(1, n + 1, 2):
    odd.append(str(i))
print(" ".join(odd))

largest_even = n if n % 2 == 0 else n - 1
even = []
for i in range(largest_even, 1, -2):
    even.append(str(i))
print(" ".join(even))