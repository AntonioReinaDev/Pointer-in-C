#include <stdio.h>

int main(void){
    //Criação e atribuição de número a nossa variável valor
    int valor = 10;
    //Criação da variável de coleta de dado de outra variável
    //E atribuição a ela com a variável criada anteriormente
    int coletorValor = valor;

    //Impressão criada para entendermos melhor oque está acontecendo ao decorrer do código
    //Valores inciais
    printf("Número de Valor antes de sua atribuição\nValor: %i\ncoletorValor:%i\n\n", valor, coletorValor);

    //Atribuição de um novo número a nossa variável valor;
    valor = 30;

    //Impressão de valores após sua atribução
    printf("Número de valor após sua atribuicao\nValor:%i\ncoletorValor:%i", valor, coletorValor);

    getchar();

    return (0);
}