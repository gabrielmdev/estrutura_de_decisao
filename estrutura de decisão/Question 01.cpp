#include <stdio.h>

int main() {
	float valor, desc;
	int forma_pagamento;
	printf("======== MENU DO PRODUTO ========\n");
	printf("Digite o valor do produto:  ");
	scanf("%f", &valor);
	printf("=================================\n");
	printf("Formas de pagamentos: \n(1) A vista ou Cheque (-10%%)\n(2) A vista no Cartao de Credito (-15%%)\n(3) Dividido em duas vezes (s/juros)\n(4) Dividido em tres vezes (+10%%)\n");
	printf("=================================\n");
	printf("Escolha uma das opcoes citadas acima: ");
	scanf("%d", &forma_pagamento);
	
	switch (forma_pagamento) {
		case 1:
			desc = valor - valor * 0.10;
			printf("Valor com 10%% de desconto: R$ %.2f", desc);
		break;
		case 2:
			desc = valor - valor * 0.15;
			printf("Valor com 15%% de desconto: R$ %.2f", desc);
		break;
		case 3:
			desc = 	valor/2;
			printf("Valor do produto dividido em duas vezes: %.2f", desc);
		break;
		case 4:
			desc = valor/3 + (valor * 0.1);
			printf("Valor do produto divido em tres vezes: %.2f", desc);				
		break;	
	}

return 0;
}

