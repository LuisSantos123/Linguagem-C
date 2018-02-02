// bibliotecas
#include<stdio.h>
#include<ctype.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
// constantes
#define QTD 40
// prototipar funções
void cadastrarAluno(char pNomes[QTD][100],int pMatriculas[QTD],int *pPosicaoLivre);
void exibirAlunos(char pNomes[QTD][100],int pMatriculas[QTD],float pNotas[QTD],int pPosicaoLivre);
void lancarNota(int pMatriculas[QTD],float pNotas[QTD],int pPosicaoLivre);
void media(char pNomes[QTD][100],float pNotas[QTD],int pPosicaoLivre);
int procurarAluno(int pMatriculas[QTD],char pNomes[QTD][100],float pNotas[QTD],int pPosicaoLivre);
int excluirAluno(int pMatriculas[QTD],char pNomes[QTD][100],float pNotas[QTD],int *pPosicaoLivre);
// programa principal
// programa principal
main(){
	setlocale(LC_ALL,"");
	int escolha,posicaoLivre=0;
	float notas[QTD]={};
	int matriculas[QTD]={};
	char nomes[QTD][100];
	do{
	printf("\n1 - Cadastrar Aluno");
	printf("\n2 - Exibir Alunos");
	printf("\n3 - Lançar Nota");
	printf("\n4 - Médias");
	printf("\n5 - Procurar Aluno");
	printf("\n6 - Excluir Aluno");
	printf("\n9 - Sair ==> ");
	scanf("%i",&escolha);
	switch (escolha){
		case 1:// cadastra aluno
			cadastrarAluno(nomes,matriculas,&posicaoLivre);
		break;
		case 2:// Exibe todos os alunos
			exibirAlunos(nomes,matriculas,notas,posicaoLivre);
		break;
		case 3:// Exibe todos os alunos
			lancarNota(matriculas,notas,posicaoLivre);
		break;
		case 4:
			media(nomes,notas,posicaoLivre);
		break;
		case 5:
			procurarAluno(matriculas,nomes,notas,posicaoLivre);
		break;
		case 6:
			excluirAluno(matriculas,nomes,notas,&posicaoLivre);
			//system("cls");
			//printf("\nVoltando ao menu de Pesquisas\n");
			//procurarAluno(matriculas,nomes,notas,posicaoLivre);
		break;
		case 9:// sair do sistema
		break;
	}
	}while(escolha!=9);
	
}
// declaração de funções
void cadastrarAluno(char pNomes[QTD][100],int pMatriculas[QTD],int *pPosicaoLivre){
	system("cls");
	if(*pPosicaoLivre==QTD) printf ("\n Nao existem posições livres!");
	else{
		do{
		printf("\nInforme o nome: ");
		fflush(stdin);
		gets(pNomes[*pPosicaoLivre]);
		if(isalpha(pNomes[*pPosicaoLivre][100])) printf("Informação Invalida.");
		}while(isalpha(pNomes[*pPosicaoLivre][100]));
		do{
		printf("\nInforme a matricula: ");
		scanf("%i",&pMatriculas[*pPosicaoLivre]);
		if(pMatriculas[*pPosicaoLivre]<=0) printf("Informação Invalida.");
			}while(pMatriculas[*pPosicaoLivre]<=0);
		(*pPosicaoLivre)++;
	}
}

void exibirAlunos(char pNomes[QTD][100],int pMatriculas[QTD],float pNotas[QTD],int pPosicaoLivre){
	if(pPosicaoLivre==0) printf ("\n Nao existem alunos cadastrados!");
	else{	
	//system("cls");
	for(int x=0;x<pPosicaoLivre;x++){
		if(pMatriculas[x]==0){
			
		}else{
		printf("\n Matricula do aluno: %i",pMatriculas[x]);
		printf("\n Nome do aluno: %s",pNomes[x]);
		printf("\n Nota do aluno: %.2f",pNotas[x]);
		printf("\n ######################################");
	}
	}
}
}

void lancarNota(int pMatriculas[QTD],float pNotas[QTD],int pPosicaoLivre){
	if(pPosicaoLivre==0) printf ("\n Nao existem alunos cadastrados!");
	else{	
	system("cls");
	int mat;
	printf("\nInforme a matricula do aluno ==> ");
	scanf("%i",&mat);
	for(int x=0;x<pPosicaoLivre;x++){
		if(mat==pMatriculas[x]){
			do{
			
			printf("\n Informe a nota do aluno: ");
			scanf("%f",&pNotas[x]);
			if(pNotas[x]<0){
			printf("valor informado invalido");
		}
		}while(pNotas[x]<0);
			printf("\n Nota lançada com sucesso!!!");
			break;
		}
	}
}



	
}
void media(char pNomes[QTD][100],float pNotas[QTD],int pPosicaoLivre){

if(pPosicaoLivre==0) {
printf ("\n Nao existem alunos cadastrados!");
} else{	
	system("cls");
	int cont=0;
	for(int x=0;x<pPosicaoLivre;x++){
		if(pNotas[x]>=7){
			cont++;
		}
		}
		printf("\n Número de alunos aprovados===> %i",cont);
		for(int x=0;x<pPosicaoLivre;x++){
		printf("\n Nome do aluno: %s",pNomes[x]);
		printf("\n Nota do aluno: %.2f",pNotas[x]);
		
			}
	}
}
int procurarAluno(int pMatriculas[QTD],char pNomes[QTD][100],float pNotas[QTD],int pPosicaoLivre){
	int retorno=-1;
	if(pPosicaoLivre==0) {
		printf ("\n Nao existem alunos cadastrados!");
	}else{		
		int mat;
		printf("\nInforme a matricula do aluno ==> ");
		scanf("%i",&mat);
		for(int x=0;x<pPosicaoLivre;x++){
			if(mat==pMatriculas[x]){
				retorno=x;
				printf("\n Nome do aluno: %s",pNomes[x]);
				printf("\n Nota do aluno: %.2f",pNotas[x]);	
				printf("\n Matricula do aluno: %i",pMatriculas[x]);
				break;
			}
		}
		if(retorno==-1) printf("\n Nenhum aluno encontrado!");	
	}
	return retorno;
}



int excluirAluno(int pMatriculas[QTD],char pNomes[QTD][100],float pNotas[QTD],int *pPosicaoLivre){
	int indice=-1;
	char resp;
	indice=procurarAluno(pMatriculas,pNomes,pNotas,*pPosicaoLivre);
	printf("\n ==> %i",indice);
	if(indice>=0){
		printf("\n Deseja realmente excluir o aluno %s? S / N", pNomes[indice]);
		fflush(stdin);
		scanf("%c",&resp);
		resp=toupper(resp);
		if(resp=='S'){
			for(indice;indice<*pPosicaoLivre;indice++){
			strcpy(pNomes[indice], pNomes[indice+1]);
			pMatriculas[indice] = pMatriculas[indice+1];
			pNotas[indice] = pNotas[indice+1];
			}
			*pPosicaoLivre--;
			printf("\n Aluno excluido com sucesso!!");
		}else{
			printf("\n Operação cancelada!!");
		}
		
	}
}
		
	

	
				
		
	
	


