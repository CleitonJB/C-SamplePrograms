#include<stdio.h>
#include<locale.h>
/*
Na alf�ndega de um certo pa�s, a cota de isen��o de produtos importados por pessoa vale $ 5000,00 caso o valor total dos produtos importados 
por um passageiro exceda essa cota, ele dever� pagar um imposto de 100% sobre a diferen�a entre o valor total importado e a cota m�xima de isen��o. 

Desenvolva um algoritmo que leia o valor total dos produtos importados por um passageiro e informe se ele est� isento de taxa ou n�o, nesse �ltimo caso 
o algoritmo deve tamb�m informar o valor da taxa��o calculada pelo algoritmo.
*/
int main(){
	float ValorTotalProdutos, taxa;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Valor total dos produtos importados: \n");
	scanf("%f", &ValorTotalProdutos);
	
	if(ValorTotalProdutos > 5.000){
		taxa = (ValorTotalProdutos - 5.000) * (100 / 100);
		printf("Voc� N�O est� isento de taxa. \nValor da taxa��o: R$ %.3f.\n", taxa);
	}else{
		printf("Voc� est� isento de taxa!\n");
	}
	return 0;
}

