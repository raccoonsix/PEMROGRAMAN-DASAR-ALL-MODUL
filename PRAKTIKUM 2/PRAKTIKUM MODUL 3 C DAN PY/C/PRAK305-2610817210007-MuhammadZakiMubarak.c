#include <stdio.h>
 
int main() {
    long long total, hari, jam, menit, detik, sisa;
 
    scanf("%lld", &total);
 
    hari = total / 86400;
    sisa = total % 86400;
    jam = sisa / 3600;
    sisa = sisa % 3600;
    menit = sisa / 60;
    detik = sisa % 60;
 
    if (hari > 0)
        printf("%lld hari ", hari);
    printf("%02lld:%02lld:%02lld\n", jam, menit, detik);
    return 0;
}