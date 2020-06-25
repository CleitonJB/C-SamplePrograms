#include<stdio.h>
#include<locale.h>

int main(){
	int i = 0;
	char Nome[i], sobrenome[20];
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o nome ai, guerreiro: \n");
	scanf("%[^\n]s", Nome[i]);
	for(i = 0; i <= Nome; i++){
		printf("%s", Nome[i]);
	}
	return 0;
}

