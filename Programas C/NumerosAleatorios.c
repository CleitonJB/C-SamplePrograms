#include<stdio.h> 
#include<stdlib.h> 
#include<time.h>

int main(){
	int i;
	srand(time(0)); 
  
    for(i = 0; i<5; i++){
		printf(" %d ", rand() % 10);
	} 
  
    return 0; 
}

