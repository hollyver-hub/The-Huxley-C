#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;

    scanf("%d", &num);
    for(int i = 1; i <= 10; i++){
        printf("%d\n", num*i);
    }
    return 0;
}