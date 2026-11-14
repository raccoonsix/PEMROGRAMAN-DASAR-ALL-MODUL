// PRAK702 - Palindrom
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char kata[200], kecil[200];
    int i, len, palindrom = 1;

    scanf("%s", kata);
    len = strlen(kata);

    for (i = 0; i < len; i++)
        kecil[i] = tolower(kata[i]);
    kecil[len] = '\0';

    for (i = 0; i < len / 2; i++) {
        if (kecil[i] != kecil[len - 1 - i]) {
            palindrom = 0;
            break;
        }
    }

    if (palindrom)
        printf("Kata '%s' adalah palindrom\n", kata);
    else
        printf("Kata '%s' bukan palindrom\n", kata);
    return 0;
}