#include <stdio.h>
#include <string.h>

int main() {
    char nama[100], nim[30], Kelas[30], ttl[50], alamat[70], hobby[30], nohp[20];
    printf("Nama                    : ");
    scanf("%s", nama);
    printf("NIM                     : ");
    scanf("%s", nim);
    printf("Kelas Paralel           : ");
    scanf("%s", Kelas);
    printf("Tempat/Tanggal Lahir    : ");
    scanf("%s", ttl);
    printf("Alamat                  : ");
    scanf("%s", alamat);
    printf("Hobby                   : ");
    scanf("%s", hobby);
    printf("No HP                   : ");
    scanf("%s", nohp);
    printf("\n\n");

    return 0;
}