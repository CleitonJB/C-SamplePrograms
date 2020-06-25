#include<stdio.h>
#include<locale.h>

int main(){
	char arvore[20][20];
	int x, y;
	
	printf("--- Feliz Natal! ---");
	
	/* -------- PREENCHENDO TODA MATRIZ -------- */
	for(x = 0; x < 20; x++){
		for(y = 0; y < 20;  y++){
			arvore[x][y] = ' ';
		}
	}
	//preenchendo1
	
		arvore[0][10] = '*';
	
	//preenchendo2
	
		arvore[1][9] = '*';
		arvore[1][10] = '*';
		arvore[1][11] = '*';
	
	//preenchendo3
	
		arvore[2][8] = '*';
		arvore[2][9] = '*';
		arvore[2][10] = '*';
		arvore[2][11] = '*';
		arvore[2][12] = '*';
	
	//preenchendo4
	
		arvore[3][7] = '*';
		arvore[3][8] = '*';
		arvore[3][9] = '*';
		arvore[3][10] = '*';
		arvore[3][11] = '*';
		arvore[3][12] = '*';
		arvore[3][13] = '*';
	
	//preenchendo5
	
		arvore[4][6] = '*';
		arvore[4][7] = '*';
		arvore[4][8] = '*';
		arvore[4][9] = '*';
		arvore[4][10] = '*';
		arvore[4][11] = '*';
		arvore[4][12] = '*';
		arvore[4][13] = '*';
		arvore[4][14] = '*';
	
	//preenchendo6
	
		arvore[5][5] = '*';
		arvore[5][6] = '*';
		arvore[5][7] = '*';
		arvore[5][8] = '*';
		arvore[5][9] = '*';
		arvore[5][10] = '*';
		arvore[5][11] = '*';
		arvore[5][12] = '*';
		arvore[5][13] = '*';
		arvore[5][14] = '*';
		arvore[5][15] = '*';
	
	//preenchendo7
	
		arvore[6][4] = '*';
		arvore[6][5] = '*';
		arvore[6][6] = '*';
		arvore[6][7] = '*';
		arvore[6][8] = '*';
		arvore[6][9] = '*';
		arvore[6][10] = '*';
		arvore[6][11] = '*';
		arvore[6][12] = '*';
		arvore[6][13] = '*';
		arvore[6][14] = '*';
		arvore[6][15] = '*';
		arvore[6][16] = '*';
	
	//preenchendo8
	
		arvore[7][3] = '*';
		arvore[7][4] = '*';
		arvore[7][5] = '*';
		arvore[7][6] = '*';
		arvore[7][7] = '*';
		arvore[7][8] = '*';
		arvore[7][9] = '*';
		arvore[7][10] = '*';
		arvore[7][11] = '*';
		arvore[7][12] = '*';
		arvore[7][13] = '*';
		arvore[7][14] = '*';
		arvore[7][15] = '*';
		arvore[7][16] = '*';
		arvore[7][17] = '*';
	
	//preenchendo9
	
		arvore[8][2] = '*';
		arvore[8][3] = '*';
		arvore[8][4] = '*';
		arvore[8][5] = '*';
		arvore[8][6] = '*';
		arvore[8][7] = '*';
		arvore[8][8] = '*';
		arvore[8][9] = '*';
		arvore[8][10] = '*';
		arvore[8][11] = '*';
		arvore[8][12] = '*';
		arvore[8][13] = '*';
		arvore[8][14] = '*';
		arvore[8][15] = '*';
		arvore[8][16] = '*';
		arvore[8][17] = '*';
		arvore[8][18] = '*';
		
	//preenchendo10
	
		arvore[9][10] = '*';
		arvore[10][10] = '*';
		arvore[11][10] = '*';
		
	
	//
	for(x = 0; x < 13; x++){
		if(y != x){
			printf("\n");
		}
		for(y = 0; y < 20; y++){
			printf("%c", arvore[x][y]);
		}
	}
	
	printf("\n------- Sem passas -");
	return 0;
}

