/**
 * Agoritmo: Calculo de Soma Recursivo
 * Instituto: Universidade Tecnologica Federal do Parana
 * Implementado por: Romario Ferreira
 * twitter: @RomarioFe44eira
 * data: 19/09/2015
 * 
 **/
 
#include <stdio.h>
#include <stdlib.h>

int vet[5] ={2,3,5,62,9};

int somar(int n){

    if(n > 0){
        return vet[n] + somar(n-1);
    }
    else{
        return vet[0];
    }

}

int main(){
    
    printf("%d", somar(4));
    
    getchar();
    return 0;
}
