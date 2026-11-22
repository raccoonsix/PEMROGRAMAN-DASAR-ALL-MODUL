#include <stdio.h>

int main() {
    int angka;
    scanf("%d", &angka);

    int *point = &angka;
    printf("Nilai variable = %d\n", angka);
    printf("Alamat variabel = %p\n", (void*)&angka);
    printf("Nilai melalui pointer = %d\n", *point);

    *point = *point * 2;
    printf("Nilai setelah diubah lewat pointer = %d", *point);

    return 0;
}