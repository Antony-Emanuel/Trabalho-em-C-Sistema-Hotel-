#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int qtdepessoas;
	int qtdequartos;
	int opcao1;
	int opcao2;
	int opcao3;
	int opcao4;
	int opcao5;
	
	printf("***********BEM VINDO AO HOTEL TRANSIVALNIA************\n");
	printf("******************************************************\n");
	
	printf("\n");
	printf("Insira os dados a seguir\n");
	
	//Coletar os dados do cliente 
	
	printf("Quantidade de pessoas: \n");
	scanf("%d", &qtdepessoas);
	
	
	//Estrutura para mostrar o quarto ideal
	
	
	if (qtdepessoas == 1){
		
		printf("Quantidade de quartos desejados: \n");
	    scanf("%d", &qtdequartos);
	 
	 		if(qtdequartos == 1){
	   		printf("O melhor quarto sera o de solteiro \n");
	   		printf("Temos 3 tipos de quartos escolha o seu: \n");
	   		printf("1 - Quarto basico (R$80)\n");
	   		printf("2 - Quarto normal (R$100)\n");
	   		printf("3 - Quarto premium (R$120)\n");
	   		printf("***********************\n");
	   		printf("Digite o numero da opcao desejada?\n");
	   		scanf("%d", &opcao1);
	    	if(opcao1 == 1){
		
	    	printf("Quarto basico selecionado!\n");
			}
			if(opcao1 == 2){
		
			printf("Quarto normal selecionado!\n");
			}
			if(opcao1 == 3){
			
			printf("Quarto PREMIUM selecionado!\n");
			}
	
	 		} 
	 
	}
	
	if (qtdepessoas == 2){
	 if(qtdequartos == 1 ){
	  
	  printf("O melhor quarto para voces sera o de casal!\n");
	   
	   //Escolher o tipo de quarto
	   
	   printf("Temos 3 tipos de quartos escolha o seu: \n");
	   printf("1 - Quarto basico (R$80)\n");
	   printf("2 - Quarto normal (R$100)\n");
	   printf("3 - Quarto premium (R$120)\n");
	   printf("******************************\n");
	   printf("Digite o numero da opcao desejada?\n");
	   scanf("%d", &opcao1);
	    if(opcao1 == 1){
		
	    printf("Quarto basico selecionado!\n");
		}
		if(opcao1 == 2){
		
		printf("Quarto normal selecionado!\n");
		}
		if(opcao1 == 3){
			
		printf("Quarto PREMIUM selecionado!\n");
		}
		
	 }else if(qtdequartos == 2){
	  
	  printf("Dois quartos de solteiro servirao para cada um!\n");
	   
	   //Escolher o tipo de quarto
	   
	   printf("Temos 3 tipos de quartos escolha o seu: \n");
	   printf("1 - Quarto basico (R$80)\n");
	   printf("2 - Quarto normal (R$100)\n");
	   printf("3 - Quarto premium (R$120)\n");
	   printf("******************************\n");
	   printf("Digite o numero da opcao desejada?\n");
	   scanf("%d", &opcao1);
	    if(opcao1 == 1){
		
	    printf("Quarto basico selecionado!\n");
		}
		if(opcao1 == 2){
		
		printf("Quarto normal selecionado!\n");
		}
		if(opcao1 == 3){
			
		printf("Quarto PREMIUM selecionado!\n");
		}
	 }
	}
	
	if(qtdepessoas == 3 || qtdepessoas == 4){
	   
	   printf("Para esse quantidade de pessoas temos as opcoes abaixo: \n Escolha uma: \n");
	   printf("1 - Quarto duplo casal\n");
	   printf("2 - Quarto duplo (1 Cama casal e 1 Cama Solteiro)\n");
	   printf("3 - UM quarto solteiro e UM quarto casal\n");
	   printf("4 - Dois quartos casal\n");
	   printf("Escolha uma das opcoes acima\n");
	   scanf("%d", &opcao2);
	    if(opcao2 == 1) {
	     printf("Quarto duplo casal selecionado!\n");
		} else if(opcao2 == 2) {
		 printf("Quarto duplo selecionado!\n");
		} 
		if(opcao2 == 3) {
		 printf("Quarto solteiro e quarto casal selcionado!\n");
		} else if(opcao2 == 4){
		 printf("Dois quartos casal selecionado!\n");
		}
		    
		    printf("Escola a qualidade do quarto: \n");
			printf("1 - Quarto basico (R$80)\n");
	        printf("2 - Quarto normal (R$100)\n");
	   		printf("3 - Quarto premium (R$120)\n");
	   		printf("******************************\n");
	   		printf("Digite o numero da opcao desejada?\n");
	   		scanf("%d", &opcao3);
	    	if(opcao3 == 1){
		
	    	printf("Quarto basico selecionado!\n");
			}
			if(opcao3 == 2){
		
			printf("Quarto normal selecionado!\n");
			}
			if(opcao3 == 3){
			
			printf("Quarto PREMIUM selecionado!\n");
			} 
		}
	
	if (qtdepessoas == 5){
	  printf("Temos as opcoes a seguir para essa quantidade de pessoas:\n");
	  printf("1 - Dois quartos casal\n");
	  printf("2 - Dois quartos casal e um solteiro\n");
	  printf("3 - Cinco quartos solteiro\n");
	  printf("Escolha uma opcao:\n");
	  scanf("%d", &opcao4);
	  printf("\n");
	   if(opcao4 == 1){ 
	    printf("Opcao -Dois quartos casal- selecionado!\n");
	   } else if(opcao4 == 2){
	   	printf("Opcao -Dois quartos casal e Um solteiro- selecionado!\n");
	   } else if(opcao4 == 3){
	    printf("Opcao - Cinco quartos solteiro\n");
	   }
	   
	   printf("Escola a qualidade do quarto: \n");
			printf("1 - Quarto basico (R$80)\n");
	        printf("2 - Quarto normal (R$100)\n");
	   		printf("3 - Quarto premium (R$120)\n");
	   		printf("******************************\n");
	   		printf("Digite o numero da opcao desejada?\n");
	   		scanf("%d", &opcao5);
	    	if(opcao5 == 1){
		
	    	printf("Quarto basico selecionado!\n");
			}
			if(opcao5 == 2){
		
			printf("Quarto normal selecionado!\n");
			}
			if(opcao5 == 3){
			
			printf("Quarto PREMIUM selecionado!\n");
			} 
	  
	}

printf("*****************************************************\n");	   
printf("OBRIGADO POR FAZER SUA RESERVA NO NOSSO QUERIDO HOTEL");

	return 0;
}
