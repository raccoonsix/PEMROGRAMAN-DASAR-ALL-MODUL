#include <stdio.h>

long long langkah_hanoi(int n) {
    if (n == 0) {
        return 0;
    }
    return 2 * langkah_hanoi(n - 1) + 1;
}

int main() {
    int n;

    scanf("%d", &n);
    printf("Jumlah langkah minimum untuk %d cakram adalah %lld\n", n, langkah_hanoi(n));

    return 0;
}