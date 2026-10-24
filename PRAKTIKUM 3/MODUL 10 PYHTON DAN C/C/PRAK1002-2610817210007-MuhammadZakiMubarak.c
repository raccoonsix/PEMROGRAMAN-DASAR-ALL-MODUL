#include <stdio.h>

void fibonacci(long long a, long long b, int sisa) {
    if (sisa == 0) {
        return;
    }
    printf("%lld", a);
    if (sisa > 1) {
        printf(" ");
    }
    fibonacci(b, a + b, sisa - 1);
}

int main() {
    int n;

    scanf("%d", &n);
    fibonacci(0, 1, n);
    printf("\n");

    return 0;
}