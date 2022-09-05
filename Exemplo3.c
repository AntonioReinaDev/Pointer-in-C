#include <stdio.h>

int main(void){
    //Criação e atribuição de número a nossa variável valor
    int valor = 10;
    //Criação da variável de coleta de dado de outra variável
    //E atribuição a ela com a variável criada anteriormente
    int coletorValor = valor;

    //Atribuição de um novo número a nossa variável valor;
    valor = 30;

    //Impressão de valores
    printf("Valor:%i\ncoletorValor:%i", valor, coletorValor);

    getchar();

    return (0);
}