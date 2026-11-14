kata = input()
kecil = kata.lower()

if kecil == kecil[::-1]:
    print("Kata '" + kata + "' adalah palindrom")
else:
    print("Kata '" + kata + "' bukan palindrom")