#include <stdio.h>

int main(void){
    int valor = 10;

    //Declaração de ponteiro
    //Basta utilizarmos um asterisco (*) à esquerda do identificador (nome) da variável para dizer que ela é um ponteiro.
    //Atribuimos a referência ao endereço da variável, caso atribuirmos somente a variável
    //O código não irá funcionar pois ocasionará um erro de sintaxe.
    int *ponteiro = &valor;

    //Ao passarmos para impressão com o asterisco indicamos que queremos o valor da variável.
    printf("Valor: %i\n", *ponteiro);

    //Ao passarmos para impressão sem o asterisco indicamos que queremos o endereço da variável.
    printf("Endereco: %i", ponteiro);

    getchar();

    return (0);
}