#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i += 2) {
        if (i > 1) {
            printf(" ");
        }
        printf("%d", i);
    }
    printf("\n");

    int biggest_even = (n % 2 == 0) ? n : n - 1;
    for (i = biggest_even; i >= 2; i -= 2) {
        if (i < biggest_even) {
            printf(" ");
        }
        printf("%d", i);
    }
    printf("\n");

    return 0;
}