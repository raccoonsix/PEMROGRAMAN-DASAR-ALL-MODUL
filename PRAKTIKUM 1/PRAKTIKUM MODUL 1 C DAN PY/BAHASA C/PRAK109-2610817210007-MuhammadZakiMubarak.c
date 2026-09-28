#include <stdio.h>

int main() {
    float yuzhong_army = 958.730;
    int CR_hero = 5;
    float must_be_defeated = yuzhong_army / CR_hero;

    printf("Jumlah pasukan yang dibawa yuzhong = %.3f\n", yuzhong_army);
    printf("Jumlah pahlawan = %d\n", CR_hero);
    printf("jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %.3f pasukan", must_be_defeated);

    return 0;
}