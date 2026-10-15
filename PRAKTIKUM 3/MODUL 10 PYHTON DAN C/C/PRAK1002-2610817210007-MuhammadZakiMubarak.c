#include <stdio.h>

int jumlah_digit(long long n) {
    if (n == 0) {
        return 0;
    }
    return (int)(n % 10) + jumlah_digit(n / 10);
}

int main() {
    long long n;

    scanf("%lld", &n);
    printf("Jumlah digit dari %lld adalah %d\n", n, jumlah_digit(n));

    return 0;
}