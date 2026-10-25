def maksimal(a, b):
    if a > b:
        return a
    return b

def minimal(a, b):
    if a < b:
        return a
    return b

bilangan = int(input())
data = list(map(int, input().split()))

maks = -100000
minim = 100000
for nilai in data:
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

print(maks, minim)