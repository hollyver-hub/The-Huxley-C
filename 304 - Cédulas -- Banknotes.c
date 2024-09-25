#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int valor, troco;
    
    scanf("%d", &valor);
    printf("%d\n", valor);
    troco = valor/100;
    printf("%d nota(s) de R$ 100,00\n", troco);
    
    valor = valor%100;
    troco = valor/50;
    printf("%d nota(s) de R$ 50,00\n", troco);
    
    valor = valor%50;
    troco = valor/20;
    printf("%d nota(s) de R$ 20,00\n", troco);
    
    valor = valor%20;
    troco = valor/10;
    printf("%d nota(s) de R$ 10,00\n", troco);
    
    valor = valor%10;
    troco = valor/5;
    printf("%d nota(s) de R$ 5,00\n", troco);
    
    valor = valor%5;
    troco = valor/2;
    printf("%d nota(s) de R$ 2,00\n", troco);
    
    valor = valor%2;
    troco = valor/1;
    printf("%d nota(s) de R$ 1,00\n", troco);
    valor = valor%50;
    
	return 0;
}
