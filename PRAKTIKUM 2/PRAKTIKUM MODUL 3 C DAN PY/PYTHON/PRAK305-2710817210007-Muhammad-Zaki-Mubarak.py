print("Masukkan jumlah detik:")
baris = input()

total = int(baris)
jam = total // 3600
menit = (total % 3600) // 60
detik = total % 60

if jam >= 24:
    hari = jam // 24
    jam = jam % 24
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")
