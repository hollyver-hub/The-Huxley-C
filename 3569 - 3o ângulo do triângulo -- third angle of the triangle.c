#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float angulo1, angulo2, angulo3;
    scanf("%f %f", &angulo1, &angulo2);
    angulo3 = 180 - angulo1 - angulo2;

    printf("3o angulo=%f", angulo3);
    return 0;
}