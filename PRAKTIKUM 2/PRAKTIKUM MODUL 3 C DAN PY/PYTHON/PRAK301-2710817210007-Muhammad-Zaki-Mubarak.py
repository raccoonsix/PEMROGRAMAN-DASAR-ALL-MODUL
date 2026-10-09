number = list(map(int, input().split()))
 
if len(number) == 2:
    a, b = number
    if a > b:
        a, b = b, a
    print(a, b)
    if a < b:
        a, b = a, b
