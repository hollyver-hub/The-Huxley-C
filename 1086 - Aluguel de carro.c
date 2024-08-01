#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double dias, km, pagamento, fator;
    
    scanf("%lf %lf", &dias, &km);
    pagamento = dias * 30 + km * 0.01;
    pagamento = pagamento - pagamento * 0.1;
    
    printf("%.2f", pagamento);
    
    
	return 0;
}
