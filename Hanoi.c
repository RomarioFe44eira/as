/**
 * Agoritmo: Torre de Hanoi Recursivo
 * Instituto: Universidade Tecnologica Federal do Parana
 * Implementado por: Romario Ferreira
 * twitter: @RomarioFe44eira
 * data: 10/08/2016
 * 
 **/


#include <stdio.h>
#include <stdlib.h>


int hanoi(int n, char origem, char auxiliar, char destino, int *movimentos){
	
	if(n==0){
		return 1;
	}
	
	hanoi(n-1,origem,destino,auxiliar, movimentos);
	printf("%d: move disco %d da torre %c para torre %c\n", ++(*movimentos), n, origem, destino);
	hanoi(n-1, auxiliar, origem, destino, movimentos);

    
}


int main(){
    int discos, movimentos = 0;
    do{
        do{
            printf("ESTRUTURA DE DADOS - TORRE DE HANOI RECUSIVA IMPLEMENTADA POR ROMARIOi\nInforme a quantidade de discos: ");
            scanf("%d", &discos);
        }while(discos < 0);
        hanoi(discos, 'A', 'B', 'C', &movimentos);
        printf("\nDeseja continuar. (1- Sim | 0 - Nao)\nEscolha: ");
        scanf("%d", &discos);
    }while(discos != 0);
    return 0;
    exit(1);
}