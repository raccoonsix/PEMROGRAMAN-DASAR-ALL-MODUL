#include <stdio.h>
const double pi = 22/7.0;

int main() {
    double r, h;
    double volume, area, circumference;
    printf("Masukkan Jari-Jari: ");
    scanf("%lf", &r);
    printf("Masukkan Tinggi: ");
    scanf("%lf", &h);

    volume = pi * r * r * h;
    area = 2 * pi * r * (r + h);
    circumference = 2 * pi * r;

    printf("Volume = %.2lf\n", volume);
    printf("Luas = %.2lf\n", area);
    printf("Keliling = %.2lf\n", circumference);
    
    return 0;
}