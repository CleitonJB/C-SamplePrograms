#include<stdio.h>
#include<locale.h>

int main(){
	char nome[30];
	int i = 0, tamanho = 0;

	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite uma palavra: \n");
	scanf(" %s", &nome);
	
	tamanho = strlen(nome);
	
	printf("\n%s ao contrário: \n", nome);
	
	for(i = tamanho; i >= 0; i--){
		printf("%c ", nome[i]);
	}
	return 0;
}

