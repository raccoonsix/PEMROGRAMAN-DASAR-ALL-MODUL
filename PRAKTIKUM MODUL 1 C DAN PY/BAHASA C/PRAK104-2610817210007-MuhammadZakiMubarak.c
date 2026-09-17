#include <stdio.h>

int main() {
    int shoe_a = 400000;
    int shoe_b = 350000;
    int discount_a = shoe_a - (13 * shoe_a / 100);
    int discount_b = shoe_b - (21 * shoe_b / 100);

    printf("Harga sepatu A adalah %d\n", shoe_a);
    printf("Harga sepatu B adalah %d\n", shoe_b);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", discount_a);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", discount_b);

    return 0;
}