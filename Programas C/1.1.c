#include<stdio.h>
#include<locale.h>

int main(){
	float salario, salarioHora, horaExtra, salarioAcrescimo;
	int horasTrabalhadas;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe o seu salário: \n");
	scanf("%f", &salario);
	
	printf("Quantidade de horas trabalhadas no total: \n");
	scanf("%d", &horasTrabalhadas);
	
	salarioHora = salario / 220;
	
	horaExtra = salarioHora * 1.5;
	
	horasTrabalhadas = horasTrabalhadas - 220;
	
	salarioAcrescimo = horasTrabalhadas * horaExtra;
	
	printf("\nSalário por hora: R$ %.2f.\nHora extra com acréscimo: R$ %.2f.\nAcréscimo total: R$ %.2f.\nSalário final: R$ %.2f.", salarioHora, horaExtra, salarioAcrescimo, (salarioAcrescimo + salario));
	return 0;
}

