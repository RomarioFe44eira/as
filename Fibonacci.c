/**
 * Agoritmo: Calculo de Fibonacci Recursivo
 * Instituto: Universidade Tecnologica Federal do Parana
 * Implementado por: Romario Ferreira
 * twitter: @RomarioFe44eira
 * data: 10/08/2016
 * 
 **/
 
#include <stdio.h>

long int fibonacci(int termo){
    if(termo == 1 || termo == 2){
        return 1;
    }
    else{
        return fibonacci(termo-1) + fibonacci(termo-2);
    }
}


int main(){
    
    int termo;
    long int fibo;

    printf("Digite o termo de Fibonacci: ");
    scanf("%d", &termo);
    fibo = fibonacci(termo);
    printf("O termo %d da Serie de Fibonaci e: %ld \n", termo, fibo);
    return 0; 
}
