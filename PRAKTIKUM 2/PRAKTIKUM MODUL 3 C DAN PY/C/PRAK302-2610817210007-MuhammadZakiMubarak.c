#include <stdio.h>

int main() {
    int value;

    printf("Masukkan Nilai: ", value);
    scanf("%d", &value);
    if (value >= 80)
        printf("A\n");
    else if (value >= 70)
        printf("B\n");
    else if (value >= 60)
        printf("C\n");
    else if (value >= 50)
        printf("D\n");
    else
        printf("E");

    return 0;
}