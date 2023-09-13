#include <stdio.h>
#include <math.h>

int main() {
    int numero;
	printf("==== VERIFICAR ====\n");
    printf("==> Digite um numero inteiro de 4 caracteres: ");
    scanf("%d", &numero);

    if (numero < 1000 || numero >= 10000) {
        printf("==> Valor invalido!\n");
        printf("REINICIE O PROGRAMA!");
        return 1;
    }

	int quociente1, quociente2, resultado;
    quociente1 = numero / 100;
    quociente2 = numero % 100;
    resultado = pow(quociente1 + quociente2, 2);


    if (resultado == numero) {
        printf("==> (%d + %d)^2 eh igual a %d\n", quociente1, quociente2, numero);
    } else {
        printf("==> (%d + %d)^2 eh diferente de %d\n", quociente1, quociente2, numero);
    }

    return 0;
}

