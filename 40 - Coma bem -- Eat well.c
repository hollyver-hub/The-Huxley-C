#include <stdio.h>

int main(void) {
    float valor;

    scanf("%f", &valor);
    valor = valor + (valor*0.1);

    printf("%.2f", valor);

    return 0;
}
