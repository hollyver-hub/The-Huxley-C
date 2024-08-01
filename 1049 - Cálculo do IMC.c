#include <stdio.h>

/*entradas = PESO E ALTURA
 *Peso entre 1 e 500kg
 *Altura entre 1 e 2,8 metros
 *Saida = imc calculado.
 *
 */

int main(void) {
 float peso, altura, imc;

 scanf("%f %f", &peso, &altura);

 imc = peso/(altura * altura);

 printf("%.2f\n", imc);

 return 0;
}
