#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int Cv, Ce, Cs, Fv, Fe, Fs, resultado_Cormengo, resultado_Flaminthians;
    scanf("%d %d %d %d %d %d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);
    if(Cv >= 0 && Cv <= 100 && Ce >= 0 && Ce <= 100 && Fv >= 0 && Fv <= 100 && Fe >= 0 && Fe <= 100){
        resultado_Cormengo = Cv * 3 + Ce;
        resultado_Flaminthians = Fv * 3 + Fe;
        if(resultado_Cormengo > resultado_Flaminthians){
            printf("C");
        }
        else if(resultado_Cormengo < resultado_Flaminthians){
            printf("F");
        }
        else{
            if(Cs >= -1000 && Cs <= 1000 && Fs >= -1000 && Fs <= 1000){
                if(Cs > Fs){
                    printf("C");
                }
                else if(Fs > Cs){
                    printf("F");
                }
                else{
                    printf("=");
                }
            }
        }
        
    }
    
	return 0;
}
