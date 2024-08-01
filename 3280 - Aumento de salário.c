#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float salario;
    
    scanf("%f", &salario);
    printf("%.2f", salario + salario*0.075);
	return 0;
}
