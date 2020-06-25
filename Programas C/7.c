#include<stdio.h>
#include<locale.h>
/*
Na alfândega de um certo país, a cota de isenção de produtos importados por pessoa vale $ 5000,00 caso o valor total dos produtos importados 
por um passageiro exceda essa cota, ele deverá pagar um imposto de 100% sobre a diferença entre o valor total importado e a cota máxima de isenção. 

Desenvolva um algoritmo que leia o valor total dos produtos importados por um passageiro e informe se ele está isento de taxa ou não, nesse último caso 
o algoritmo deve também informar o valor da taxação calculada pelo algoritmo.
*/
int main(){
	float ValorTotalProdutos, taxa;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Valor total dos produtos importados: \n");
	scanf("%f", &ValorTotalProdutos);
	
	if(ValorTotalProdutos > 5.000){
		taxa = (ValorTotalProdutos - 5.000) * (100 / 100);
		printf("Você NÃO está isento de taxa. \nValor da taxação: R$ %.3f.\n", taxa);
	}else{
		printf("Você está isento de taxa!\n");
	}
	return 0;
}

