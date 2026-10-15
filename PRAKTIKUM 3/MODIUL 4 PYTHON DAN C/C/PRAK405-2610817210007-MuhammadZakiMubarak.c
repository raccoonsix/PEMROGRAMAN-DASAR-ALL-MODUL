#include <stdio.h>

int main() {
    int n, kelipatan, i, j;
    long total = 0;

    scanf("%d %d", &n, &kelipatan);

    for (i = 1; i <= n; i++) {
        long jumlah_baris = 0;
        for (j = i; j >= 1; j--) {
            if (j < i) {
                printf(" + ");
            }
            printf("(%d * %d)", j, kelipatan);
            jumlah_baris += (long)j * kelipatan;
        }
        printf(" = %ld\n", jumlah_baris);
        total += jumlah_baris;
    }

    printf("%ld\n", total);

    return 0;
}