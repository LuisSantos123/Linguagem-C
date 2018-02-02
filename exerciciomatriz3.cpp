/*3.Faça um programa que lê uma matriz M(5,5) e calcule as somas: da linha 3ªde M;
da coluna 4ªde M; 
da diagonal principal; 
da diagonal secundária; 
de todos os elementos da matriz; 
Escreva estas somas e a matriz. */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>
#define LINHA 5
#define COLUNA 5

int main(){
	setlocale(LC_ALL,"portuguese");
		int matrix[LINHA][COLUNA],count=0,resultlinha3=0,resultcoluna4=0,resultdiago=0, i=0;
		for (int x=0;x<LINHA;x++){
		for (int y=0;y<COLUNA;y++){
		matrix[x][y]=count;
			count++;}
		}for(int x=0;x<LINHA;x++){
		printf("\n");
		for(int y=0;y<COLUNA;y++){
			printf("%4d",matrix[x][y]); 
			
		}
}		resultcoluna4=matrix[0][3]+matrix[1][3]+matrix[2][3]+matrix[3][3]+matrix[4][3];
		resultlinha3=matrix[2][0]+matrix[2][1]+matrix[2][2]+matrix[2][3]+matrix[2][4];
		
			 printf("\n\nO resultado da soma da linha três é: \t%d",resultlinha3); 
			 printf("\n\nO resultado da soma da coluna quatro é: \t%d",resultcoluna4); 
			 
			 for(i=0;i<LINHA && i<COLUNA;i++){         
             resultdiago+=matrix[i][i];
}
printf("\n\nO resultado da soma da diagonal principal é: \t%d",resultdiago); 



}

