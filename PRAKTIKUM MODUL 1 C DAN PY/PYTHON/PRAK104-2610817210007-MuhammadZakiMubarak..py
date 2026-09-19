shoe_a = 400000
shoe_b = 350000


discount_a = 0.13
discount_b = 0.21


(shoe_a * discount_a)
(shoe_b * discount_b)

print("Harga sepatu A adalah", shoe_a)
print("Harga sepatu A adalah", shoe_b)
print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {int(shoe_a - (shoe_a * discount_a))}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {int(shoe_b - (shoe_b * discount_b))}")