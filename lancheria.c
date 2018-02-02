#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#define P_CACHORRO 6.5
#define P_HAMBURGUER 10.0
#define P_CHEESE 12.5
#define P_EGGS 13.0
#define P_REFRI 4.5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

setlocale(LC_ALL,"portuguese");
	int qtde;
	char opcao;
	float cupomcachorro=0,cupomhamburger=0,cupomcheese=0,cupomeggs=0,cupomrefri=0;	
	int acucachorro=0,acuhamburger=0,acucheeseburger=0,acuegg=0,acurefri=0,cupom=0;
	float total;
	do{
		printf("\n1 - Cachorro quente");
		printf("\n2 - Hamburger");
		printf("\n3 - Cheeseburger");
		printf("\n4 - Eggcheeseburger");
		printf("\n5 - Refrigerante");
		printf("\nF - Fechar Pedido ");
		printf("\nInforme a opção desejada ==>  ");
		fflush(stdin);
		scanf("%c",&opcao);
		if(toupper(opcao)!='F'){
			printf("\n Digite a qtde: ");
			scanf("%i",&qtde);
		}
		switch(toupper(opcao)){
			case '1':
				system("cls");
				printf("%i Cachorro Quente ==> R$ %.2f  ==> R$ %.2f\n\n",qtde,P_CACHORRO,qtde*P_CACHORRO);
				cupomcachorro+=(qtde*P_CACHORRO);
				acucachorro+=(qtde);
			break;
			case '2':
				system("cls");
				printf("%i Hamburger ==> R$ %.2f  ==> R$ %.2f\n\n",qtde,P_HAMBURGUER,qtde*P_HAMBURGUER);
				cupomhamburger+=(qtde*P_HAMBURGUER);
				acuhamburger+=(qtde);
			break;
			case '3':
				system("cls");
				printf("%i Cheeseburger ==> R$ %.2f  ==> R$ %.2f\n\n",qtde,P_CHEESE,qtde*P_CHEESE);
				cupomcheese+=(qtde*P_CHEESE);
				acucheeseburger+=(qtde);
			break;
			case '4':
				system("cls");
				printf("%i Eggcheeseburger ==> R$ %.2f  ==> R$ %.2f\n\n",qtde,P_EGGS,qtde*P_EGGS);
				cupomeggs+=(qtde*P_EGGS);
				acuegg+=(qtde);
			break;
			case '5':
				system("cls");
				printf("%i Refrigerante ==> R$ %.2f  ==> R$ %.2f\n\n",qtde,P_REFRI,qtde*P_REFRI);
				cupomrefri+=(qtde*P_REFRI);
				acurefri+=(qtde);
			break;
			case 'F':
			printf("########## NOTA FISCAL##########\n");
			printf("\n\nValor unit. Refrigerante %2.2f qtd de comprada %i valor total %2.2f\n",P_REFRI,acurefri,cupomrefri);
			printf("\n\nValor unit. EGGS %2.2f qtd de comprada %i valor total %2.2f\n",P_EGGS,acuegg,cupomeggs);
			printf("\n\nValor unit. Cheeseburger %2.2f qtd de comprada %i valor total %2.2f\n",P_CHEESE,acucheeseburger,cupomcheese);
			printf("\n\nValor unit. Hamburger %2.2f qtd de comprada %i valor total %2.2f\n",P_HAMBURGUER,acuhamburger,cupomhamburger);
			printf("\n\nValor unit. Cachorro %2.2f qtd de comprada %i valor total %2.2f\n",P_CACHORRO,acucachorro,cupomcachorro);
			total=cupomrefri+cupomeggs+cupomcheese+cupomhamburger+cupomcachorro;
			
			break;
			
			default: printf("\n\t ==> Opção Inválida!!");
			
		}
		
	}while(toupper(opcao)!='F');
	printf("\n\t ==> A pagar ==> R$ %.2f\n\n",total);
	
	
	
	
	
	
	
	
		return 0;
}


