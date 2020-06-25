#include<stdio.h>
#include<locale.h>

int main(){
	int a = 6, b = 7, c = 5;
	
	setlocale(LC_ALL, "Portuguese");

	if(a > (b || c)){
		printf("Work!");
	}else{
		printf("Nops!");
	}
	
	return 0;
}

