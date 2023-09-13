#include <stdio.h>
#include <math.h>

int main() {
    float coeficienteA, coeficienteB, coeficienteC, delta;
    printf("==== MENU - COEFICIENTES ====\n");
    printf("==> Digite os valores de a, b e c:\n");
    printf("==> Valor de A = ");
    scanf("%f", &coeficienteA);
    printf("==> Valor de B = ");
    scanf("%f", &coeficienteB);
    printf("==> Valor de C = ");
    scanf("%f", &coeficienteC);
    printf("=============================\n");
    
    delta = coeficienteB * coeficienteB - 4 * coeficienteA * coeficienteC;
    
    float x1, x2;
    if (delta > 0) {
        x1 = (-coeficienteB + sqrt(delta)) / (2.0 * coeficienteA);                         
        x2 = (-coeficienteB - sqrt(delta)) / (2.0 * coeficienteA);
        printf("==> Valor de X' = %.2f\n", x1);
        printf("==> Valor de X'' = %.2f\n", x2);
        printf("=============================\n");
    } else if (delta == 0) {
        x1 = -coeficienteB / (2.0 * coeficienteA);
        printf("==> Valor de X' = X''\n");
        printf("==> Valor de X = %.2f\n", x1);
        printf("=============================\n");
    } else {
        printf("A equacao nao possui raizes.\n");
    	printf("=============================\n");        
    }

    return 0;
}

