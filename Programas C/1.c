#include<stdio.h>
#include<locale.h>

int main(){
	/*
	Para calcular o valor de sua hora extra � necess�rio:
	
	- Saber o valor de sua hora trabalhada, que vamos chamar de sal�rio-hora.
	- Para saber quanto voc� ganha por hora, fa�a o seguinte: divida o seu sal�rio por 220, que s�o o total de horas trabalhadas por m�s, o resultado dessa conta � o seu sal�rio-hora.
	- Ao seu sal�rio-hora, acrescente 50%, que � o percentual legal da hora extra, o resultado desta conta ser� o valor de uma hora extra.
	- Multiplique o valor de uma hora extra pelo n�mero de horas que voc� trabalhou a mais. Assim, saber� o total em dinheiro que dever� receber no final do m�s, al�m do sal�rio normal.

	Fa�a um programa em C para ajudar um trabalhador a calcular o quanto ele vai ganhar em horas-extras ao final de um m�s de trabalho.
	*/
	float salario, salario_hora, hora_extra;
	int horas_trabalhadas;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe o seu sal�rio: \n");
	scanf("%f", &salario);
	
	salario_hora = salario / 220;
	
	printf("Informe a quantidade de horas trabalhadas a mais: \n");
	scanf("%d", &horas_trabalhadas);
	
	hora_extra = salario * 0.5; //hora_extra = salario * 0.5;
	
	printf("Sal�rio final com o acr�scimo de %d horas a mais trabalhadas: R$ %.2f. \n", horas_trabalhadas, hora_extra * horas_trabalhadas);
	return 0;
}

