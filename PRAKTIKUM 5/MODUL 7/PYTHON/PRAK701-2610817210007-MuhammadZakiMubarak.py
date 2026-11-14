depan = input("Nama Depan: ")
belakang = input("Nama Belakang: ")

lengkap = depan + " " + belakang
print("Nama Lengkap :", lengkap)
print("Panjang Nama (tanpa spasi) :", len(lengkap.replace(" ", "")))