#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a;
    int cont = 0;
    for(int i = 0; i < 5; i++){
        printf("Digite um valor:\n");
        scanf("%f", &a);
        if(a < 0){
            cont++;
        }
    }
    printf("Foram digitados %d numeros negativos", cont);
    return 0;
}