#include <stdio.h>

int main() {
    int n, i;
    int zetsu[10000];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &zetsu[i]);
    
    for (i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", zetsu[i] * (i + 1));
    }

    printf("\n");
    return 0;
}