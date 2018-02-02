/*2. Faça um programa leia um matriz 3x3. Em seguida, exiba a soma dos elementos de cada uma das linhas ;*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>
#define LINHA 3
#define COLUNA 3

int main(){
	setlocale(LC_ALL,"portuguese");
	int matrix[LINHA][COLUNA],count=0, result=0;
	for (int x=0;x<LINHA;x++){
	for (int y=0;y<COLUNA;y++){
		matrix[x][y]=count;
			count++;}
		}
	for(int x=0;x<LINHA;x++){
		printf("\n");
		for(int y=0;y<COLUNA;y++){
			printf("%4d",matrix[x][y]); 
			result+=matrix[x][y];
		}
	}	printf("\n\nA soma das matrizes é \t %i",result );
	}	
		
		
	
	
	

