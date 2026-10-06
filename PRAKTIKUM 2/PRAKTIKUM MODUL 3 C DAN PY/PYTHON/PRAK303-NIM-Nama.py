print("Masukkan sebuah bilangan: ")
while True:
    try:
        baris = input()
    except EOFError:
        break
    if baris.strip() == "":
        break

    value = int(baris)

    if value > 0:
        print("positif")
    elif value < 0:
        print("negatif")
    else:
        print("nol")