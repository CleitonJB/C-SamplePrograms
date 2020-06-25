#include<stdio.h>
#include<locale.h>

int main(){
	/*
	Fa�a um algoritmo para ler quatro valores referentes a quatro notas escolares de um aluno e imprimir uma mensagem dizendo que o aluno foi aprovado, 
	se o valor da m�dia escolar for maior ou igual a 7. se o valor da m�dia ou menor que 7, solicitar a nota de exame, somar com o valor da m�dia e obter 
	nova m�dia. Se a nova m�dia for maior ou igual a 5, apresentar uma mensagem dizendo que o aluno foi aprovado em exame. Se o aluno n�o foi aprovado, 
	indicar uma mensagem informando esta condi��o. Apresentar junto com as mensagens o valor da m�dia do aluno, para qualquer condi��o.
	*/
	float vlr1, vlr2, vlr3, vlr4, media;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Valor da primeira nota: \n");
	scanf("%f", &vlr1);
	printf("Valor da segunda nota: \n");
	scanf("%f", &vlr2);
	printf("Valor da terceira nota: \n");
	scanf("%f", &vlr3);
	printf("Valor da quarta nota: \n");
	scanf("%f", &vlr4);
	
	media = (vlr1 + vlr2 + vlr3 + vlr4) / 4;
	
	if(media >= 7.0){
		printf("\nVoc� foi Aprovado!\nM�dia = %.2f.", media);
	}else if(media < 7.0){ //Poderia ser somente o else
		float exame;
		printf("\nM�dia = %.2f\nValor da nota do exame: \n", media);
		scanf("%f", &exame);
		
		media = (media + exame) / 2;
		
		if(media >= 5.0){
			printf("\nAprovado em exame!\nM�dia = %.2f.", media);
		}else{
			printf("\nVoc� n�o foi aprovado!\nM�dia = %.2f.", media);
		}
	}
	return 0;
}

