#include<stdio.h>
#include<locale.h>

int main(){
	int i = 0, triangulos[9];
	float MA = 0.0;

	setlocale(LC_ALL, "Portuguese");

	while(i < 10){
		printf("Medida final do tri�ngulo %d: \n", i + 1);
		scanf("%d", &triangulos[i]);
		
		MA += triangulos[i];
		
		i++;
	}
	
	MA = MA / 10;
	
	printf("M�dia aritm�tica dos 10 tri�ngulos = %.2f\n", MA);
	
	return 0;
}

