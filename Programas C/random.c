#include<stdio.h>

int soma(int a, int b) {
	return a + b;
}

int main() {
	//não mostra
	soma(2, 5);
	//mostra
	printf("%d", soma(12, 5));
	
	return 0;
}
