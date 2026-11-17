#include <stdio.h>
#include <string.h>

int main() {
    char kode[1000], pesan[1000], hasil[1000];
    int i, bintang = 0, pagar = 0, len;

    fgets(kode, sizeof(kode), stdin);
    fgets(pesan, sizeof(pesan), stdin);
    kode[strcspn(kode, "\n")] = '\0';
    pesan[strcspn(pesan, "\n")] = '\0';

    if (strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    len = strlen(kode);
    for (i = 0; i < len; i++) {
        if (kode[i] == pesan[i]) {
            if (kode[i] == ' ') {
                hasil[i] = ' ';
            } else {
                hasil[i] = '*';
                bintang++;
            }
        } else {
            hasil[i] = '#';
            pagar++;
        }
    }
    hasil[len] = '\0';

    printf("%s\n", hasil);
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);
    if (bintang >= pagar)
        printf("Pesan Asli\n");
    else
        printf("Pesan Palsu\n");
    return 0;
}