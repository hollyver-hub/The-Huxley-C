#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, contador = 0;
    float quantidade = 0;
    scanf("%d", &num);

    while(1){
        if(num == 999){
            break;
        }
        if(num > 2){
            quantidade = quantidade + (num-2);
            contador++;
        }
        scanf("%d", &num);
    }
    printf("%.2f\n%d\n", quantidade*12.89, contador);
    return 0;
}
