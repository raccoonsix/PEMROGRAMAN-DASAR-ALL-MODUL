print("Masukkan Nilai: ")
while True:
    try:
        values = input()
    except EOFError:
        break
    if values.strip() == "":
        break

    nilai = float(values)
    if nilai >= 80:
        print("A")
    elif nilai >= 70:
        print("B")
    elif nilai >= 60:
        print("C")
    elif nilai >= 50:
        print("D")
    else:
        print("E")
