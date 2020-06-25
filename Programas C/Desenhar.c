#include<stdio.h>
#include<locale.h>

int main(){
	int i;
	char a;
	setlocale(LC_ALL, "Portuguese");
	
	a = 'u';
	
	for(i = 0; i <= 10; i++){
		printf("%d ", a);
	}
	return 0;
}

