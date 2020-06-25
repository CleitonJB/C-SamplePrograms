#include<stdio.h>
#include<locale.h>

int verificar(int a, int b, char jogo[][3]){
if (jogo[a-1][b-1] == 'x' || jogo[a][b] == 'o')
return 1;

return 0;
}
int validar(int a, int b, char c){
if (a > 3 || a < 0 || b > 3 || b < 0)
return 2;

if (c != 'x' && c != 'o')
return 2;

return 0;
}
void iniciarJogo(char jogo[][3]){
int i,j;
for(i=0; i<3; i++)
for(j=0; j<3; j++)
jogo[i][j] = '-';
}
void imprimirJogo(char jogo[][3]){
int j;
printf("\n#### JOGO ATUAL ####\n");
printf(" 1 2 3\n");
for(j=0; j<3; j++)
printf("%i %c %c %c\n",(j+1),jogo[j][0],jogo[j][1],jogo[j][2]);
printf("\n");
}
int gravar(int a, int b, char c, char jogo[][3]){
int FAIL;
FAIL = validar(a,b,c);
if(FAIL != 0) return FAIL;

FAIL = verificar(a,b,jogo);
if(FAIL != 0) return FAIL;

//gravando...
jogo[a-1][b-1] = c;
//gravando...

return 0;
}
void MENU(char jogo[][3]){
iniciarJogo(jogo);
printf("### O Jogo foi Iniciado ###\n");
int num, num2, sair;
char c, cVez;
cVez = 'x';
sair = 0;

do{
printf("E a vez de %c, Jogar!\nDigite sua jogada:\nExemplo.: 1 1 x\n\t ",cVez);
scanf("%i",&num);
scanf("%i",&num2);
scanf(" %c",&c);
if (num == 0 && num2 == 0) break;
if(cVez == c)
switch(gravar(num,num2,c,jogo)){
case 1:
printf("\nJa existe marcacao na coordenada!\n");
break;
case 2:
printf("\nUm ou mais dados da coordenada esta errado.\nSiga o exemplo.\n");
break;
default:
printf("\nBoa jogada!");
if (c =='x') cVez = 'o';
else cVez = 'x';
imprimirJogo(jogo);
break;
}
else printf("Nao e sua vez de jogar: %c \n",c);

}while(sair == 0);
printf("###### GAME OVER ######");
}
int main (void){
char JOGO[3][3];
MENU(JOGO);

return 0;
}

