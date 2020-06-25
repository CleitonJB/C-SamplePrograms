#include<stdio.h>
#include<locale.h>

int main(){
	char nome1[30], nome2[30], nome3[30], nome4[30];
	int qVt1, qVt2, qVt3, qVt4, QVtotais;
	float nulos, brancos, PcNulos, PcBrancos;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Nome do candidato 1: \n");
	scanf("%s", nome1);
	printf("Quantidade de votos para %s: \n", nome1);
	scanf("%d", &qVt1);
	//
	printf("Nome do candidato 2: \n");
	scanf("%s", nome2);
	printf("Quantidade de votos para %s: \n", nome2);
	scanf("%d", &qVt2);
	//
	printf("Nome do candidato 3: \n");
	scanf("%s", nome3);
	printf("Quantidade de votos para %s: \n", nome3);
	scanf("%d", &qVt3);
	//
	printf("Nome do candidato 4: \n");
	scanf("%s", nome4);
	printf("Quantidade de votos para %s: \n", nome4);
	scanf("%d", &qVt4);
	
	printf("Quantidade de votos nulos: \n");
	scanf("%f", &nulos);
	printf("Quantidade de votos brancos: \n");
	scanf("%f", &brancos);
	
	QVtotais = (qVt1 + qVt2 + qVt3 + qVt4) + brancos + nulos;
	
	PcNulos = (100 * nulos) / QVtotais;
	PcBrancos = (100 * brancos) / QVtotais;
	
	printf("\nPorcentagem de votos nulos: %.2f%%\nPorcentagem de votos brancos: %.2f%%\n", PcNulos, PcBrancos);
	
	printf("\nVotos totais: %d\n\n", QVtotais);
	
		
	if(qVt1 > qVt2 && qVt1 > qVt3 && qVt1 > qVt4){
		printf("O condidato %s foi eleito com %d votos.\n", nome1, qVt1);
	}else if(qVt2 > qVt1 && qVt2 > qVt3 && qVt2 > qVt4){
		printf("O condidato %s foi eleito com %d votos.\n", nome2, qVt2);
	}else if(qVt3 > qVt1 && qVt3 > qVt2 && qVt3 > qVt4){
		printf("O condidato %s foi eleito com %d votos.\n", nome3, qVt3);
	}else if(qVt4 > qVt1 && qVt4 > qVt2 && qVt4 > qVt3){
		printf("O condidato %s foi eleito com %d votos.\n", nome4, qVt4);
	}else{
		printf("EMPATE entre os canditatos!!!\n");
	}
	return 0;
}
