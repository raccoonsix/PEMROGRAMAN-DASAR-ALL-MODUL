def fibonacci(a, b, sisa):
    if sisa == 0:
        return
    print(a, end=" " if sisa > 1 else "")
    fibonacci(b, a + b, sisa - 1)


n = int(input())
fibonacci(0, 1, n)
print()