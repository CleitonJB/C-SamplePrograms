#include<stdio.h>
#include<locale.h>

int main(){
	int i = 1, y = 1;
	int a = 10, b = 10;
	
	setlocale(LC_ALL, "Portuguese");

	printf("Feliz Natal!\n");
	
	while(y <= 10){
		while(a >= 0){
			printf(" ");
			a--;	
		}
		a = b - 1;
		b--;
		
		while(i > 0){
			printf("*");
			i--;
		}
		
		printf("\n");
		i = y + 1;
		y++;
		
	}
	//TRONCO
	y = 1;
	a = 10;
	b = 10;
	
	while(y <= 3){
		while(a >= 0){
			printf(" ");
			a--;	
		}
		a = b;
		
		printf("*");
		printf("\n");
		y++;	
	}
	
	return 0;
}

