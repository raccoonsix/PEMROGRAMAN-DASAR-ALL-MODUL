kalimat = input("Kalimat: ")

vokal =0 
konsonan = 0
for huruf in kalimat.lower():
    if huruf.isalpha():
        if huruf in "auieo":
            vokal += 1
        else:
            konsonan += 1

print("Jumlah Vokal:", vokal)
print("Jumlah Konsonan:", konsonan)