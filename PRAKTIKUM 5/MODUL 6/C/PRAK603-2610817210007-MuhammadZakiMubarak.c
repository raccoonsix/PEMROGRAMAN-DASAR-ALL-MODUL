#include <stdio.h>

int main() {
    int n1, n2, i;
    int b1[1000], b2[1000];

    scanf("%d %d", &n1, &n2);
    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
        return 0;
    } else {

    for (i = 0; i < n1; i++) scanf("%d", &b1[i]);
    for (i = 0; i < n2; i++) scanf("%d", &b2[i]);

    for (i = 0; i < n1; i++) {
        if (i > 0) printf(" ");
        printf("%d", b1[i] * b2[i]);
    }
}
    printf("\n");
    return 0;
}