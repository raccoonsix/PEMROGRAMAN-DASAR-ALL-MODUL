#include <stdio.h>
 
int main() {
    double a, b, tmp;
 
    scanf("%lf %lf", &a, &b);
 
    if (a > b) { 
        tmp = a; a = b; b = tmp; 
    } else if (a < b) { 
        tmp = a; a = b; b = tmp; 
    }
    
    printf("%.10g %.10g\n", a, b);
    return 0;
}