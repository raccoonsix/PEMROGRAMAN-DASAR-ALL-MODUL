def biodata(tahun_lahir, nama, asal):
    tahun_sekarang = 2020
    print("Perkenalkan Nama Saya :", nama)
    print("Umur Saya :", tahun_sekarang - tahun_lahir)
    print("Saya Adalah Angkatan :", tahun_sekarang)
    print("Asal Saya dari :", asal)

tahun_lahir = int(input())
nama = input().strip()
asal = input().strip()
biodata(tahun_lahir, nama, asal)