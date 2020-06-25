#include<stdio.h>
#include<locale.h>

int main(){
	/*
	Faça um algoritmo para ler quatro valores referentes a quatro notas escolares de um aluno e imprimir uma mensagem dizendo que o aluno foi aprovado, 
	se o valor da média escolar for maior ou igual a 7. se o valor da média ou menor que 7, solicitar a nota de exame, somar com o valor da média e obter 
	nova média. Se a nova média for maior ou igual a 5, apresentar uma mensagem dizendo que o aluno foi aprovado em exame. Se o aluno não foi aprovado, 
	indicar uma mensagem informando esta condição. Apresentar junto com as mensagens o valor da média do aluno, para qualquer condição.
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
		printf("\nVocê foi Aprovado!\nMédia = %.2f.", media);
	}else if(media < 7.0){ //Poderia ser somente o else
		float exame;
		printf("\nMédia = %.2f\nValor da nota do exame: \n", media);
		scanf("%f", &exame);
		
		media = (media + exame) / 2;
		
		if(media >= 5.0){
			printf("\nAprovado em exame!\nMédia = %.2f.", media);
		}else{
			printf("\nVocê não foi aprovado!\nMédia = %.2f.", media);
		}
	}
	return 0;
}

