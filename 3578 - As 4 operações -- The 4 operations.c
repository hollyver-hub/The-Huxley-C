#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float num1, num2;
    
    scanf("%f %f", &num1, &num2);
    
    printf("%.2f\n", num1 + num2);
    printf("%.2f\n", num1 - num2);
    printf("%.2f\n", num1 * num2);
    printf("%.2f\n", num1 / num2);
    
	return 0;
}
