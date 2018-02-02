/* 
 * Autor: 
 * Data: 30/09/2017
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define P_LEITE 2.98
#define P_MARGARINA 4.9
#define P_PAO 0.5
#define P_GELEIA 12.9
main() {
	
	setlocale (LC_ALL, "portuguese");
	
	int senha, qtd = 0, qtdLeite = 0, qtdMargarina = 0, qtdPao = 0, qtdGeleia = 0;
	int aculeite = 0, acumargarina = 0, acupao = 0, acugeleia = 0;
	char opcao;
	float vlrTotal, vlrLeite,vlrMargarina,vlrPao,vlrGeleia;
	float total;
	do {
		
		printf("informe a senha ");
		scanf("%i", &senha);
		
		if(senha != 1234) {
			
			printf ("senha incorreta\n");
		}
			
	} while(senha != 1234);
	
	printf("entrou");
	
	// Menu principal
	do {
		
		printf("1 - Produtos\n"); 
		printf("2 - Cupom fiscal\n"); 
		printf("S - Encerrar o sistema\n");
		fflush(stdin);
		scanf("%c",&opcao);
		system("cls"); //limpatela
	
		switch(toupper(opcao)){ // switch menu principal
		
		case '1': // PRODUTOS
			
			int op;
			
			do{ // submenu de produtos
				printf("\n 1 - leite R$2.98 "); 
				printf("\n 2 - margarina pote R$4.90 "); 
				printf("\n 3 - pao R$0.50  ");
				printf("\n 4 - geleia R$12.90");
				scanf("%i", &op);
				
				// switch do submenu
					switch(op){
					case 1: // SELECIONAR LEITE
						do {
							printf("Digite a quantidade: ");
							scanf("%i", &qtd);
							
							if (qtd < 1) {
								printf("Quantidade inválida!");
							}
							
							qtdLeite = qtd;
							
							vlrLeite = qtdLeite * P_LEITE;
							printf("\n\nRESULTADO: %.2f \n", vlrLeite);
							
							
						} while (qtd < 1);
						
						break;
					case 2: // SELECIONAR MARGARINA
						printf("Digite a quantidade: ");
							scanf("%i", &qtd);
							
							if (qtd < 1) {
								printf("Quantidade inválida!");
							}
							
							qtdMargarina = qtd;
							
							vlrMargarina = qtdMargarina * P_MARGARINA;
							printf("\n\nRESULTADO: %.2f \n", vlrMargarina);
						
						break;
					case 3: // SELECIONAR PAO
						printf("Digite a quantidade: ");
							scanf("%i", &qtd);
							
							if (qtd < 1) {
								printf("Quantidade inválida!");
							}
							
							qtdPao = qtd;
							
							vlrPao = qtdPao * P_PAO;
							printf("\n\nRESULTADO: %.2f \n", vlrPao);
						
						break;
					case 4: // SELECIONAR GELEIA
						printf("Digite a quantidade: ");
							scanf("%i", &qtd);
							
							if (qtd < 1) {
								printf("Quantidade inválida!");
							}
							
							qtdGeleia = qtd;
							
							vlrGeleia = qtdGeleia * P_GELEIA;
							printf("\n\nRESULTADO: %.2f \n", vlrGeleia);
						break;
					default: // OPÇÃO INVÁLIDA
						printf("opcao invalida");
						
					}
		
					
			} while ( op < 1 || op > 4); // fim submenu produtos
			
			break; 
			//fim case 1
		
		case '2': // NOTA FISCAL
			
			printf("########## NOTA FISCAL##########\n");
			printf("\n\nValor unit. Leite %2.2f qtd de comprada %i valor total %2.2f\n",P_LEITE,qtdLeite,vlrLeite);
			printf("\n\nValor unit. Margarina %2.2f qtd de comprada %i valor total %2.2f\n",P_MARGARINA,qtdMargarina,vlrMargarina);
			printf("\n\nValor unit. Pao %2.2f qtd de comprada %i valor total %2.2f\n",P_PAO,qtdPao,vlrPao);
			printf("\n\nValor unit. Geleia %2.2f qtd de comprada %i valor total %2.2f\n",P_GELEIA,qtdGeleia,vlrGeleia);
			total=vlrLeite+vlrMargarina+vlrPao+vlrGeleia;
			printf("TOTAL GERAL = %2.2f" , total);
			break; //fim case 2
		
		case 'S': //SAIR
			printf("\nSaiu!\n");
			break;
			
		default: printf("opcao invalida");
		} // fecha  swivh menu principal
		
}while (opcao != 's' && opcao != 'S'); // fim "do" principal
//      toupper(opcao) != 'S'
	
	//fecha o menu principal
	
	
}
