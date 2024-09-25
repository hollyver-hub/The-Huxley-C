#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num2 <= num1 && num2 <= num3){
        printf("%d", num2);
    }
    else if(num3 <= num2 && num3 <= num1){
        printf("%d", num3);
    }
    else{
        printf("%d", num1);
    }
	return 0;
}
