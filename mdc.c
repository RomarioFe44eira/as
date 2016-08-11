/**
 * Agoritmo: Calculo de M.D.C Recursivo - Processo das Divisoes Sucessivas
 * Instituto: Universidade Tecnologica Federal do Parana
 * Implementado por: Romario Ferreira
 * Os: GNU/Linux Ubunto
 * twitter: @RomarioFe44eira
 * data: 10/08/2016
 *
 **/

#include <stdio.h>
#include <stdlib.h>


/**
 * Função Calcula o Maximo Divisor Comum usando recusividade.
*/

int mdc(int num1,int num2){
    if(num2 == 0){
         return num1;
    }
    else{
       return mdc(num2, (num1 % num2));
    }
}

int main(){
    int num1, num2;

    printf("ESTRUTURA DE DADOS - MAXIMO DIVISOR COMUM COM RECURSIVIDADE\n");
    printf("Entre com o primeiro numero do mdc: ");
    scanf("%d", &num1);
    printf("Entre com o segundo numero do mdc: ");
    scanf("%d", &num2);
    printf("O Maximo Divisor comum entre %d e %d é %d\n", num1, num2, mdc(num1, num2));
    exit(1);

}

