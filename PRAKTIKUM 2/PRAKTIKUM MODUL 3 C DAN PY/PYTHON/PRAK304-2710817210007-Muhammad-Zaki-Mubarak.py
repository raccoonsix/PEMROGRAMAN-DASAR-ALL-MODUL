print("Masukkan angka cacah (0-99): ")
baris = input()

a = int(baris)
if a > 99:
    print("Anda Menginput Melebihi Limit Bilangan")
elif a == 0:
    print("Nol")
elif a < 10:
    print("Satuan")
elif 11 <= a <= 19:
    print("Belasan")
else:
    print("Puluhan")