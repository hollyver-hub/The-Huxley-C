#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if(num1 < num2){
        printf("%d\n%d", num1, num2);
    }
    else{
        printf("%d\n%d", num2, num1);
    }
    return 0;
}