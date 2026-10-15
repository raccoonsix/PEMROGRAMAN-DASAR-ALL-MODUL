#include <stdio.h>

int main() {
    int choice, reading_result, c;
    double a, b;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan choice : ");

        reading_result = scanf("%d", &choice);
        if (reading_result == EOF) {
            break;
        }
        if (reading_result != 1) {
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            printf("Input anda salah, silahkan coba lagi\n");
            continue;
        }

        if (choice == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Muhammad Zaki Mubarak\n");
            break;
        }

        if (choice < 1 || choice > 4) {
            printf("Input anda salah, silahkan coba lagi\n");
            continue;
        }

        printf("Masukkan nilai pertama : ");
        scanf("%lf", &a);
        printf("Masukkan nilai kedua : ");
        scanf("%lf", &b);

        switch (choice) {
            case 1:
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", a, b, a + b);
                break;
            case 2:
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", a, b, a - b);
                break;
            case 3:
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", a, b, a * b);
                break;
            case 4:
                if (b == 0) {
                    printf("Pembagian dengan nol tidak bisa dilakukan\n");
                } else {
                    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", a, b, a / b);
                }
                break;
        }
    }

    return 0;
}