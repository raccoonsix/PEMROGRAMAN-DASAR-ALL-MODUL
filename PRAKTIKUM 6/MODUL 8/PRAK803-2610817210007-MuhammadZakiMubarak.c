#include <stdio.h>
#include <string.h>

struct Peserta {
    char nama[100];
    int umur;
    int skor;
};

int main() {
    struct Peserta p;

    printf("Nama : "); 
    fgets(p.nama, sizeof(p.nama), stdin);
    p.nama[strcspn(p.nama, "\n")] = '\0';

    printf("Umur : ");
    scanf("%d", &p.umur);

    printf("Skor : ");
    scanf("%d", &p.skor);

    printf("Data Peserta:\n");
    printf("Nama : %s\n", p.nama);
    printf("Umur : %d tahun\n", p.umur);
    printf("Skor : %d\n", p.skor);

    return 0;
}