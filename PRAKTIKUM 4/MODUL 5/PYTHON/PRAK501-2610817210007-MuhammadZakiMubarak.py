def MaxBilangan(a, b, c, d):
    maks = a
    if b > maks:
        maks = b
    if c > maks:
        maks = c
    if d > maks:
        maks = d
    return maks

a, b, c, d = map(int, input().split())
print(MaxBilangan(a, b, c, d))