#include <stdio.h>

void tukarkursi(int *a, int *b ) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int andi, budi;
    scanf("%d %d", &andi, &budi);
    printf("Sebelum ditukar andi = %d, budi = %d\n", andi, budi);

    tukarkursi(&andi, &budi);

    printf("Setelah ditukar andi = %d, budi = %d", andi, budi);

    return 0;
}