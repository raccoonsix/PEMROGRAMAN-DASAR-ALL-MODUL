#include <stdio.h>
//Buatlah Function Disini
int MaxBilangan(int a, int b, int c, int d) {
    int max = a;
    if (a > b) {
        int max = b;
    } else if (c > b) {
        int max = c;
    } 
    else {
        int max = d;
    }
}

int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);

return 0;
}
