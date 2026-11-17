#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char kalimat[500];
    int i, vokal = 0, konsonan = 0;
    char c;

    printf("Kalimat : ");
    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\r\n")] = '\0';

    for (i = 0; kalimat[i] != '\0'; i++) {
        c = tolower(kalimat[i]);
        if (isalpha(c)) {
            if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
                vokal++;
            else
                konsonan++;
        }
    }

    printf("Jumlah Vokal : %d\n", vokal);
    printf("Jumlah Konsonan : %d\n", konsonan);
    return 0;
}