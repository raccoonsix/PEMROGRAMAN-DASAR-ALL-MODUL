#include <stdio.h>

int main() {
    int value_number;
    printf("Masukkan Angka: ", value_number);
    scanf("%d", &value_number);

    if (value_number > 0) {
        printf("positif\n");
    } else if (value_number < 0) {
        printf("negatif\n");
    } else {
        printf("nol\n");
    }

    return 0;
}