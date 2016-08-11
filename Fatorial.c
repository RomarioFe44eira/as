/**
 * Agoritmo: Calculo de Fatorial Recursivo
 * Instituto: Universidade Tecnologica Federal do Parana
 * Implementado por: Romario Ferreira
 * twitter: @RomarioFe44eira
 * data: 10/08/2016
 * 
 **/
 
#include <stdio.h>
#include <stdlib.h>


long int fatorial(unsigned int n){
    if(n > 0){
        return n * fatorial(n-1);
    }
    else{
        return 1;
    }
}



int main(){
    
    int n;
    printf("Digite um inteiro positivo para n:");
    scanf("%d", &n);
    printf("\n fatorial de %d e %ld \n", n, fatorial(n));
    
    return 0;
    
}