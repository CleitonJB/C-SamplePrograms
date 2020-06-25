#include<stdio.h>
#include<locale.h>

int main(){
	int TanqueCapacidade;
	float GasolinaPreco, ValorPago;
	//float const DeR = 0.17, CEA = 0.12, ICMS = 0.28, CePPeC = 0.07, RP = 0.36;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Capacidade em litros do tanque de seu carro:\n");
	scanf("%d", &TanqueCapacidade);
	printf("Preço da gasolina no posto abastecido:\n");
	scanf("%f", &GasolinaPreco);
	
	ValorPago = GasolinaPreco * TanqueCapacidade;

	printf("\nValor total pago: R$ %.2f\n", ValorPago);
	
	printf("\nValor pela Distribuição e Revenda: R$ %.2f\n", ValorPago * 0.17);
	printf("Valor pelo Custo Etanol Anidro: R$ %.2f\n", ValorPago * 0.12);
	printf("Valor pelo ICMS: R$ %.2f\n", ValorPago * 0.28);
	printf("Valor pelo CIDE e PIS/PASEP e COFINS: R$ %.2f\n", ValorPago * 0.07);
	printf("Valor pela Realização Petrobras: R$ %.2f\n", ValorPago * 0.36);
	return 0;
}

