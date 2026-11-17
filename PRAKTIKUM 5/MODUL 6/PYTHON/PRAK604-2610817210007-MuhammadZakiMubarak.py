kode = input()
pesan = input()

if len(kode) != len(pesan):
    print("Pesan palsu (panjang kode dan pesan tidak sama)")
else:
    hasil = ""
    bintang = 0
    pagar = 0
    for i in range(len(kode)):
        if kode[i] == pesan[i]:
            if kode [i] == " ":
                hasil += " "
            else:
                hasil += "*"
                bintang += 1
        else:
            hasil += "#"
            pagar += 1

    print(hasil)
    print("* =", bintang)
    print("# =", pagar)
    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")