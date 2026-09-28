#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


int main() {
    float turn = 5.0;
    float distance = 14.0;
    float circumference = distance / turn;
    float radius = circumference / (2 * M_PI);

    printf("diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f putaran\n", turn);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", distance);
    printf("jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", radius);

    return 0;
}