#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ordena(char a, char b, char c){
    int temp;
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a > c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b > c){
        temp = b;
        b = c;
        c = temp;
    }
    printf("%c %c %c\n", a, b, c);
}
int main() {
    char c1, c2, c3, c4, c5, c6;
    scanf("%c %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5, &c6);

    ordena(c1, c2, c3);
    ordena(c4, c5, c6);


    return 0;
}