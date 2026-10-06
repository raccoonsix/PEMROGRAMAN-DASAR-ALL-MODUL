#include <stdio.h>

int main() {
    double value1, value2, result; 
    printf("Masukkan Nilai Pertama: ");
    scanf("%lf", &value1);
    printf("Masukkan Nilai Kedua: ");
    scanf("%lf", &value2);

    result = value1 + value2;
    printf("Hasil dari penjumlahan nilai pertama %.2lf dan nilai kedua %.2lf adalah: %.2lf\n", value1, value2, result);

    return 0;
}