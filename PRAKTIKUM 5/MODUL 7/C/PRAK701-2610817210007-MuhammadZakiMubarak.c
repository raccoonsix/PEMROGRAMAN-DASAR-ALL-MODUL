// PRAK701 - Nama lengkap dan panjang nama
#include <stdio.h>
#include <string.h>

int main() {
    char depan[100], belakang[100], lengkap[250];
    int i, hitung = 0;

    printf("Nama Depan : ");
    fgets(depan, sizeof(depan), stdin);
    depan[strcspn(depan, "\r\n")] = '\0';

    printf("Nama Belakang : ");
    fgets(belakang, sizeof(belakang), stdin);
    belakang[strcspn(belakang, "\r\n")] = '\0';

    strcpy(lengkap, depan);
    strcat(lengkap, " ");
    strcat(lengkap, belakang);

    for (i = 0; lengkap[i] != '\0'; i++)
        if (lengkap[i] != ' ') hitung++;

    printf("Nama Lengkap : %s\n", lengkap);
    printf("Panjang Nama (tanpa spasi) : %d\n", hitung);
    return 0;
}