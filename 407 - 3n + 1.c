#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, j, maior = 0, contador = 1;
    if(n < j){
        while(scanf("%d %d", &n, &j) == 2){
            for(int i = n; i <= j; i++){
                int indice = i;
                while(indice > 1){
                    if(indice % 2 == 0){
                        indice /= 2;
                        contador++;
                    }
                    else{
                        indice = indice * 3 + 1;
                        contador++;
                    }
                }
                if(contador > maior){
                    maior = contador;
                }
                contador = 1;
            }

            printf("%d %d %d\n", n, j, maior);
            maior = 0;

        }
    }
    else{
        while(scanf("%d %d", &n, &j) == 2){
            for(int i = j; i <= n; i++){
                int indice = i;
                while(indice > 1){
                    if(indice % 2 == 0){
                        indice /= 2;
                        contador++;
                    }
                    else{
                        indice = indice * 3 + 1;
                        contador++;
                    }
                }
                if(contador > maior){
                    maior = contador;
                }
                contador = 1;
            }

            printf("%d %d %d\n", n, j, maior);
            maior = 0;
        }
    }
    return 0;
}