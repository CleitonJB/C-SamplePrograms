#include<stdio.h>

int main(){
	int i, a[10] = {1, 5, 8, 45, 131, 43, 1};
	char c[10] = {'a', 'b', 'c'};
	
	for(i = 0; i < 10;i++){
		printf("%d ", a[i]);	
	}
	
	for(i = 0; i < 10;i++){
		printf("%c ", c[i]);	
	}
	return 0;
}

