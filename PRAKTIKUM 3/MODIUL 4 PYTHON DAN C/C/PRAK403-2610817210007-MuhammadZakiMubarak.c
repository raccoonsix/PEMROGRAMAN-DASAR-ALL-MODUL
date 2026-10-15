#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, i;

    scanf("%d %d", &a, &b);

    int step = (a < b) ? 1 : -1;
    int amount = abs(a - b) + 1;

    for (i = 0; i < amount; i++) {
        if (i > 0) {
            printf(" - ");
        }
        printf("%d %d", a + i * step, b - i * step);
    }
    printf("\n");

    return 0;
}