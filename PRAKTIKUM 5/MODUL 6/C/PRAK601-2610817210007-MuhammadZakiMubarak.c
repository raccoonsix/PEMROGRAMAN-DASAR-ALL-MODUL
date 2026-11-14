// PRAK601 - Membuat matriks
#include <stdio.h>

int main() {
    int baris, kolom, i, j;
    int m[100][100];

    scanf("%d %d", &baris, &kolom);
    for (i = 0; i < baris; i++)
        for (j = 0; j < kolom; j++)
            scanf("%d", &m[i][j]);

    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            if (j > 0) printf(" ");
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}