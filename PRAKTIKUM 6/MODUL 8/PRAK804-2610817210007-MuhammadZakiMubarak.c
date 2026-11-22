#include <stdio.h>

struct Peserta {
    char nama[50];
    int umur;
    int skor;
};

int main() {
    struct Peserta p[10];
    int peserta;
    scanf("%d", &peserta);

    for (int i = 0; i < peserta; i++) {
        scanf("%s %d %d", p[i].nama, &p[i].umur, &p[i].skor);
    }

    int idxMax = 0;                       // anggap peserta pertama yang terbaik
    for (int i = 1; i < peserta; i++) {
        if (p[i].skor > p[idxMax].skor) { // pakai >, bukan >=
            idxMax = i;
        }
    }

    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n",
           p[idxMax].nama, p[idxMax].skor);
    return 0;
}