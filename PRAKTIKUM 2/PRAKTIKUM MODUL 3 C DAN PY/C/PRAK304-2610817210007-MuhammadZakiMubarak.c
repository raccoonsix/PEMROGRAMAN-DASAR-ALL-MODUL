#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    if (number < 0 || number >= 100) {
        printf("Anda menginput melebihi limit bilangan\n");
    } else if (number == 0) {
        printf("nol\n");
    } else if (number > 0 && number < 10) {
        printf("satuan\n");
    } else if (number >= 11 && number <= 19) {
        printf("belasan\n");
    } else {
        printf("puluhan\n");
    }

    return 0;
}