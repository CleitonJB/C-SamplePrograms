#include<stdio.h>
#include<locale.h>

int main(){
	/*
	Para calcular o valor de sua hora extra é necessário:
	
	- Saber o valor de sua hora trabalhada, que vamos chamar de salário-hora.
	- Para saber quanto você ganha por hora, faça o seguinte: divida o seu salário por 220, que são o total de horas trabalhadas por mês, o resultado dessa conta é o seu salário-hora.
	- Ao seu salário-hora, acrescente 50%, que é o percentual legal da hora extra, o resultado desta conta será o valor de uma hora extra.
	- Multiplique o valor de uma hora extra pelo número de horas que você trabalhou a mais. Assim, saberá o total em dinheiro que deverá receber no final do mês, além do salário normal.

	Faça um programa em C para ajudar um trabalhador a calcular o quanto ele vai ganhar em horas-extras ao final de um mês de trabalho.
	*/
	float salario, salario_hora, hora_extra;
	int horas_trabalhadas;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe o seu salário: \n");
	scanf("%f", &salario);
	
	salario_hora = salario / 220;
	
	printf("Informe a quantidade de horas trabalhadas a mais: \n");
	scanf("%d", &horas_trabalhadas);
	
	hora_extra = salario * 0.5; //hora_extra = salario * 0.5;
	
	printf("Salário final com o acréscimo de %d horas a mais trabalhadas: R$ %.2f. \n", horas_trabalhadas, hora_extra * horas_trabalhadas);
	return 0;
}

