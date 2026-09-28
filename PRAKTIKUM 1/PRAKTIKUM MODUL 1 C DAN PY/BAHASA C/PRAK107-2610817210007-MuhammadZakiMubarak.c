#include <stdio.h>

int main() {
    int side1 = 4;
    int side2 = 5;
    int side3 = 7;
    int around = side1 + side2 + side3;
    int price_per_meter = 85000;
    int total_cost = around * price_per_meter;

    printf("diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", side1, side2, side3);
    printf("keliling tanah pak dangklek adalah %d\n", around);
    printf("harga tanah per meter adalah %d\n", price_per_meter);
    printf("Jawaban\n");
    printf("Biaya yang harus dikeluarkan pak dengklek adalah : Rp %d", total_cost);

    return 0;
}