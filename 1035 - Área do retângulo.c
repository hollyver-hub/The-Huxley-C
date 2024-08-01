#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l1, l2;
    
    scanf("%d %d", &l1, &l2);
    if(l1 > 1000 || l2 > 1000){
        return 0;
    }
    else{
        printf("%d", l1 * l2);
    }
    
	return 0;
}
