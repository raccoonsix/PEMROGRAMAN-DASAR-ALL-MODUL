#include <stdio.h>

void tukarkursi(int *a, int *b ) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int budi, andi;
    scanf("%d %d", &budi, &andi);
    printf("kursi awal budi = %d, kursi awal andi = %d\n", budi, andi);

    tukarkursi(&budi, &andi);

    printf("kursi budi sekarang = %d, kursi andi sekarang = %d", budi, andi);

    return 0;
}