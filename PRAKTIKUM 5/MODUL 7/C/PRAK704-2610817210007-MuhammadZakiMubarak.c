// PRAK704 - Potong deskripsi produk
#include <stdio.h>
#include <string.h>

int main() {
    char deskripsi[500];

    fgets(deskripsi, sizeof(deskripsi), stdin);
    deskripsi[strcspn(deskripsi, "\r\n")] = '\0';

    if (strlen(deskripsi) > 20) {
        deskripsi[20] = '\0';
        printf("%s...\n", deskripsi);
    } else {
        printf("%s\n", deskripsi);
    }
    return 0;
}