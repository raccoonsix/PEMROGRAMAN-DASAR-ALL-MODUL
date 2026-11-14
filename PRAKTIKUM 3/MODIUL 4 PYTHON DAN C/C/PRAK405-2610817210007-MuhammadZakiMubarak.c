#include <stdio.h>

int main() {
    int n, multiple, i, j;
    long total = 0;

    scanf("%d %d", &n, &multiple);

    for (i = 1; i <= n; i++) {
        long number_of_rows = 0;
        for (j = i; j >= 1; j--) {
            if (j < i) {
                printf(" + ");
            }
            printf("(%d * %d)", j, multiple);
            number_of_rows += (long)j * multiple;
        }
        printf(" = %ld\n", number_of_rows);
        total += number_of_rows;
    }

    printf("%ld\n", total);

    return 0;
}