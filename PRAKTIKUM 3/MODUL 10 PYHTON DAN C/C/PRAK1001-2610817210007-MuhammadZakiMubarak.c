#include <stdio.h>

long long faktorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * faktorial(n - 1);
}

int main() {
    int n;

    scanf("%d", &n);
    printf("%d! = %lld\n", n, faktorial(n));

    return 0;
}