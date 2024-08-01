#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float salario;
    
    scanf("%f", &salario);
    
    if(salario > 500){
        printf("%.2f", salario+salario*0.1);
    }
    else if(salario < 500 && salario > 300){
        printf("%.2f", salario+salario*0.07);
    }
    else{
        printf("%.2f", salario+salario*0.05);
    }
	return 0;
}
