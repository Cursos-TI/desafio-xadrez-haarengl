#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// RECURSIVIDADE PARA TORRE
void torreRecur(int n){
	if (n > 0 ){
		//printf("%d\n",n);
		torreRecur(n -1);
		if(n>1){
			printf("A Torre andou %d casas para direita\n",n);
		} else {
			printf("A Torre andou %d casa para direita\n",n);
		}
			

	}
}


int main() {
   
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
     int bispo =1, rainha =1, j =1;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\nMOVIMENTO DO BISPO\n");
	while(bispo <= 5){
		if (bispo <= 1){
			printf("Moveu %d casa para cima e direita\n",bispo);
		}else{
			printf("Moveu %d casas para cima e direita\n",bispo);
		}
		bispo++;
	}
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMOVIMENTO DA TORRE\n");
	for (int torre = 1; torre <=5 ;torre ++){
		if(torre > 1){
			printf("Moveu %d casas para direita\n",torre);
		}else{
			printf("Moveu %d casa para direita\n",torre);
		}
	}
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMOVIMENTO DA RAINHA\n");
	do{
		if(rainha > 1){
			printf("Moveu %d casas para esquerda\n",rainha);
		}else{
			printf("Moveu %d casa para esquerda\n",rainha);
			}
	rainha++;
		
	}while(rainha <= 8);
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
	printf("\nMOVIMENTO DO CAVALO\n");
		for(int i = 1 ; i < 2 ; i++){
			while (j <= 2 ){
				if(j>1)
					printf("O Cavalo moveu %d casas para baixo \n",j);
				else printf("O Cavalo moveu %d casa para baixo \n",j);
			j++;
			}
			printf("O Cavalo moveu uma casa para esquerda\n");
			
		}
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

	//TORRE BISPO RAINHA RECURSIVIDADE
	printf("\nMOVIMENTO DA TORRE USANDO RECURSIVIDADE\n");
	torreRecur(5);
	


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
