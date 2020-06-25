#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<locale.h>

//DEFINIR TAMANHO DO CAMPO
void tamanho(int* x, int* y){
	
	printf("\nDefinir tamanho do campo minado: \n\n");
	
	printf("Quantidade de linhas: \n");
	scanf("%d", *&x);
	printf("Quantidade de colunas: \n");
	scanf("%d", *&y);

}

//PREENCHER CAMPO POR COMPLETO
int preencher(int linhas, int colunas, int* campo[linhas][colunas]){
	int x = 0, y = 0;
	
	for(x = 0; x < linhas; x++){
		for(y = 0; y < colunas; y++){
			campo[x][y] = 0;
		}
	}
	
	for(x = 0; x < linhas; x++){
		for(y = 0; y < colunas; y++){
			printf(" %d", campo[x][y]);
		}
		
		printf("\n");
	}
	
	return 0;

}

//COLOCAR MINAS ALEATÓRIAS NO CAMPO
int minar(){
	return ;
}

//JOGADOR SELECIONAR POSIÇÃO PARA VERIFICAR
int selecionar(){
	return ;
}

//MOSTRAR SITUAÇÃO ATUAL DO CAMPO
int mostrar(int linhas, int colunas, int* campo[linhas][colunas]){
	
	int x = 0, y = 0;
	
	for(x = 0; x < linhas; x++){
		for(y = 0; y < colunas; y++){
			printf(" %d", campo[x][y]);
		}
		printf("\n");
	}
	
	return 0;
}

bool fimdejogo(){
/*if(){
		return 1;
	}else{
		return 0;	
	}*/
}

int main(){
	//básico para mostrar e preencher a matriz(campo minado)
	int x = 0, y = 0, campo[x][y];

	setlocale(LC_ALL, "Portuguese");

	//recebendo quantidade de linhas e colunas do campo
	tamanho(&x, &y);
	//preenchendo campo com 0
	preencher(x, y, &campo[x][y]);
	//mostrando campo 
	mostrar(x, y, &campo[x][y]);
	
	printf("Linhas: %d\nColunas: %d\n", x, y);
	return 0;
}

