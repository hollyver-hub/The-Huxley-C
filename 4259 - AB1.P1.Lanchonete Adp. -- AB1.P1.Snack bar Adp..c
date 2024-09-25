#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int h, c, f, r, m;
    float contafinal;

    scanf("%d %d %d %d %d", &h, &c, &f, &r, &m);

    contafinal = h*3 + c*2.5 + f*2.5 + r + m*3;

    printf("conta final: %.1f", contafinal);

    return 0;
}