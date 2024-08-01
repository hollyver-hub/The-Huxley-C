#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float valor; 
    int tempo;
    scanf("%f %d", &valor, &tempo);
    switch(tempo){
        case 0:
            printf("%.2f", valor);
            break;
        case 1:
            printf("%.2f", valor+valor*0.03);
            break;
        case 2:
            printf("%.2f", valor+valor*0.05);
            break;
        default:
            return 0;
    }
	return 0;
}
