#include <stdio.h>

int main() {
	int dia, mes, ano;
	printf("======== VEJA O SEU PERFIL ========\n");
	printf("==> Data de nascimento (dia/mes/ano): ");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	printf("===================================\n");
	

	int calc_01, calc_02, resto_01, resto_02, resto_03;
	calc_01 = (dia *100 + mes) + ano;
	resto_01 = calc_01 / 100;
	resto_02 = calc_01 % 100;
	calc_02 = resto_01 + resto_02;
	resto_03 = calc_02 % 5;
		
	printf("Numero do seu perfil > [%d]\n", resto_03);
	printf("==== TABELA ====\n");
	printf("[0] > Timido\n[1] > Sonhador\n[2] > Paquerador\n[3] > Atraente\n[4] > Irresistivel\n ================ ");


return 0;
}

