#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float nota1, nota2, nota3;
    float mediaA, mediaP1, mediaP2;

    scanf("%f %f %f", &nota1, &nota2, &nota3);

    mediaA = (nota1 + nota2 + nota3)/3;
    mediaP1 = (nota1*2 + nota2*2 + nota3*3)/7;
    mediaP2 = (nota1*1 + nota2*2 + nota3*2)/5;

    printf("%.2f\n%.2f\n%.2f", mediaA, mediaP1, mediaP2);
    return 0;
}