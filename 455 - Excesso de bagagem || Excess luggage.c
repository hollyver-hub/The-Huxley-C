#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float kg, taxa;
    taxa = 0;
    scanf("%f", &kg);
    if(kg <= 20){
        printf("%.2f", taxa);
        return 0;
    }
    else if(kg > 20 && kg <= 25){
        kg = kg-20;
        taxa = kg*12.50;
    }
    else if(kg > 25 && kg <= 30){
        kg = kg - 20;
        taxa = kg*32.75;
    }
    else if(kg > 30){
        printf("PESO LIMITE EXCEDIDO");
        return 0;
    }
    printf("%.2f", taxa);
	return 0;
}
