#include<stdio.h>
#include<locale.h>

int main(){
	char nome[30];
	float nota1, nota2, media;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Nome do aluno: \n");
	scanf("%[^\n]s", nome);
	
	printf("Nota do primeiro bimestre: \n");
	scanf("%f", &nota1);
	printf("Nota do segundo bimestre: \n");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	printf("%s, a sua média é: %.1f \n", nome, media);

	return 0;
}

