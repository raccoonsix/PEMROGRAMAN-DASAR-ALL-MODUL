#include <stdio.h>

struct Dompet {
    char nama[50];
    int saldo;
};

void topUp(struct Dompet *d, int nominal) {
    d->saldo += nominal;
    printf("Top up %d berhasil, saldo = %d\n", nominal, d->saldo);
}

void bayar(struct Dompet *d, int nominal) {
    if (d->saldo >= nominal) {
        d->saldo -= nominal;
        printf("Bayar %d berhasil, saldo = %d\n", nominal, d->saldo);
    } else {
        printf("Bayar %d gagal, saldo tidak cukup\n", nominal);
    }
}

int main() {
    struct Dompet d;
    int n, i;

    scanf("%s %d", d.nama, &d.saldo);
    scanf("%d", &n);

    char jenis[n];
    int nominal[n];

    for (i = 0; i < n; i++) {
        scanf(" %c %d", &jenis[i], &nominal[i]);
    }

    for (i = 0; i < n; i++) {
        if (jenis[i] == 'T') {
            topUp(&d, nominal[i]);
        } else if (jenis[i] == 'B') {
            bayar(&d, nominal[i]);
        }
    }

    printf("Saldo akhir %s = %d\n", d.nama, d.saldo);

    return 0;
}