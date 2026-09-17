#include <stdio.h>
#include <math.h>

int main(void) {
    int base = 5;
    int height = 12;

    int slant = (int)sqrt((base * base) + (height * height));
    
    int circumference = base + height + slant;
    int area = (base * height) / 2;

    printf("diketahui :\n");
    printf("alas = %d cm\n", base);
    printf("tinggi = %d cm\n\n", height);

    printf("Jawab : \n");
    printf("Sisi A = %d cm\n", base);
    printf("Sisi B = %d cm\n", height);
    printf("Sisi C = %d cm\n", slant);
    
    printf(" = %d cm\n", circumference);
    printf("luas = %d cm\n", area);

    return 0;
}