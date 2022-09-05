#include <stdio.h>

int main(void){
    //Criação de variável e atribuição de valor
    int valorUm = 10;

    //Criação de ponteiro e atribuição de referência de variável
    int *ponteiro = &valorUm;

    //Criação de outra variável e atribuição de valor
    int valorDois = 20;

    printf("Valores antes da troca\n");
    printf("ValorUm:%i\nValorDois:%i\n\n", valorUm, valorDois);

    //Atribuição de valor ao ponteiro referenciando o valor de outra variável
    //no caso valorUm
    *ponteiro = valorDois;

    printf("Valores depois da troca\n");
    printf("ValorUm:%i\nValorDois:%i", valorUm, valorDois);

    getchar();

    return (0);
}