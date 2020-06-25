#include<stdio.h>
#include<locale.h>

int main(){
	int idade, colesterol;

	setlocale(LC_ALL, "Portuguese");

	printf("Idade(anos): \n");
	scanf("%d", &idade);
	printf("Colesterol total(mg/dl): \n");
	scanf("%d", &colesterol);
	
	if(idade > 20){
		if(colesterol < 200){
			printf("\nDesejável");
		}else if(colesterol >= 200 && colesterol <= 239){
			printf("\nMáximo");
		}else if(colesterol > 240){
			printf("\nAlto");
		}
	}else if(idade > 0 && idade <= 18){
		if(colesterol < 150){
			printf("\nDesejável");
		}else if(colesterol >= 150 && colesterol <= 169){
			printf("\nMáximo");
		}else if(colesterol > 170){
			printf("\nAlto");
		}
	}
	return 0;
}

