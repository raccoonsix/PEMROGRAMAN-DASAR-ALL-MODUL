#include <stdio.h>
#include <math.h>

int main() {
    double a, b, base, height, circumference, area;
    printf("Masukkan Nilai sisi miring: ");
    scanf("%lf", &a);
    printf("Masukkan Nilai sisi tegak: ");
    scanf("%lf", &b);

    base = sqrt(b * b - a * a);
    height = a;
    circumference = base + height + b;
    area = base * height / 2;

    printf("Alas = %.10g cm\n", base);
    printf("Tinggi = %.10g cm\n", height);
    printf("Keliling = %.10g cm\n", circumference);
    printf("Luas = %.10g cm^2\n", area);
}