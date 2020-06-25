#include<stdio.h> 
#include<locale.h> //acentuação
#include<stdbool.h> //valores booleanos nas variáveis
#include<stdlib.h> //números aleatórios
#include<time.h> //números aleatórios

int main(){

	//Uso geral da matriz(preencher e mostrar)
	int x = 0, y = 0, campo[x][y];
	//Definição do tamanho da matriz(campo)
	int linha = 0, coluna = 0;
	//Colocando minas
	int c = 1, numX = 0, numY = 0, minasCalculo;
	//Posição na matriz selecionada pelo usuário
	int x2 = 0, y2 = 0;
	bool mudar = false;
	//Fim de jogo ou não
	bool gameOver = false;
	
	/*
	- 0: Não conhecido
	- 1: Conhecido
	- 2: Mina
	*/

	setlocale(LC_ALL, "Portuguese");
	
	/* --------------------------------------------------------------------- */

	printf("Definindo o tamanho do campo minado: \n\n");
	
	printf("Quantidade de linhas: \n");
	scanf(" %d", &linha);
	printf("Quantidade de colunas: \n");
	scanf(" %d", &coluna);
	
	/* --------------------------------------------------------------------- */
	
	//PREENCHER
	printf("\nPreenchendo o campo minado...\n");
	
	for(x = 0; x < linha; x++){
		for(y = 0; y < coluna; y++){
			campo[x][y] = 0;
		}
	}
	
	/* --------------------------------------------------------------------- */
	
	//MOSTRAR
	printf("\nMostrando campo minado... \n\n");
	
	for(x = 0; x < linha; x++){
		for(y = 0; y < coluna; y++){
			printf(" %d", campo[x][y]);
		}
		printf("\n");
	}
	
	/* --------------------------------------------------------------------- */
	
	//MINAR 
	printf("\nColocando minas no campo minado...irônico, não? \n\n");
	
	srand(time(0)); 
	
	minasCalculo = (linha * coluna) / 2;
	
	while(c <= minasCalculo){
		numX = rand() % linha;
		
		numY = rand() % coluna;
		if(numY == 0){
			numY = rand() % coluna;
		}
		
		printf("linha: %d", numX);
		printf("coluna: %d\n", numY);
	
		c++;
		
		numX -= 1;
		
		numY -= 1;
		
		for(x = 0; x < linha; x++){
			if(x == numX){
				mudar = true;
			}
			//colunas
			for(y = 0; y < coluna; y++){
				if(mudar == true && y == numY){
					campo[numX][numY] = 2;
					mudar = false;
				}else{
					campo[x][y] = 0;
				}
					
				printf(" %d", campo[x][y]);
			}
			printf("\n");
		}
		
	}
	
	for(x = 0; x < linha; x++){
		for(y = 0; y < coluna; y++){
			printf(" %d", campo[x][y]);
		}
		printf("\n");
	}
	
	/* --------------------------------------------------------------------- */

	//SELECIONAR
	while(gameOver != true){
		printf("\nSelecione a posição no campo minado: \n\n");
	
		printf("Linha: \n");
		scanf("%d", &x2);
		printf("Coluna: \n");
		scanf("%d", &y2);
		
		x2 -= 1;
		y2 -= 1;
		
		if(campo[x2][y2] == 2){
			printf("\nGame Over");
			gameOver = true;
		}else{
			printf("\nKeep going...\n");
			
			//linhas
			for(x = 0; x < linha; x++){
				if(x == x2){
					mudar = true;
				}
				//colunas
				for(y = 0; y < coluna; y++){
					if(mudar == true && y == y2){
						campo[x][y] = 1;
						mudar = false;
					}else{
						campo[x][y] = 0;
					}
					
					printf(" %d", campo[x][y]);
				}
				printf("\n");
			}
		}
		
		
	}
	
	return 0;
}

