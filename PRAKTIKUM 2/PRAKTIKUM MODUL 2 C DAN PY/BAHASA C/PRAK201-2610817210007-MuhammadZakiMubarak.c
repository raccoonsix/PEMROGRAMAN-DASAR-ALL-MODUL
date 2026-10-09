#include <stdio.h>
#include <string.h>

int main() {
    char nama[100], nim[30], Kelas[30], ttl[50], alamat[70], hobby[30], nohp[20];

    printf("Nama                  : ");
    scanf(" %99[^\n]", nama);
    printf("NIM                   : ");
    scanf(" %29[^\n]", nim);
    printf("Kelas Paralel         : ");
    scanf(" %29[^\n]", Kelas);
    printf("Tempat/Tanggal Lahir  : ");
    scanf(" %49[^\n]", ttl);
    printf("Alamat                : ");
    scanf(" %69[^\n]", alamat);
    printf("Hobby                 : ");
    scanf(" %29[^\n]", hobby);
    printf("No HP                 : ");
    scanf(" %19[^\n]", nohp);
    printf("\n\n");

    return 0;
}