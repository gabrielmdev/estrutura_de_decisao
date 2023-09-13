#include <stdio.h>

int main() {
    double qnt1, qnt2, premio;
    printf("Digite a quantia que o amigo 1 participou: ");
    scanf("%lf", &qnt1);

    printf("Digite a quantia que o amigo 2 participou: ");
    scanf("%lf", &qnt2);

    printf("Digite o valor do premio: ");
    scanf("%lf", &premio);

    double parte1, parte2;
    parte1 = (qnt1 / (qnt1 + qnt2)) * premio;
    parte2 = (qnt2 / (qnt1 + qnt2)) * premio;

    printf("O amigo 1 recebera %.2lf do premio.\n", parte1);
    printf("O amigo 2 recebera %.2lf do premio.\n", parte2);

return 0;
}

