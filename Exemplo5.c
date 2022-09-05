#include <stdio.h>

int main(void){

    //Criação e atribuição de valores as variáveis
    int valorInteiro = 10;
    double valorDecimal = 20.60;
    char caractere = 'a';

    //Criação de ponteiros e atribução de endereçamento
    int *ponteiroInteiro = &valorInteiro;
    double *ponteiroDecimal = &valorDecimal;
    char *ponteiroCaractere = &caractere;

    //Impressão de endereço e valor por meio dos ponteiros
    printf("Endereço:%i - Inteiro:%i\n", ponteiroInteiro, *ponteiroInteiro );
    printf("Endereço:%i - Double:%.2f\n", ponteiroDecimal, *ponteiroDecimal);
    printf("Endereço:%i - Caractere:%c\n\n", ponteiroCaractere, *ponteiroCaractere);

    //Criação de nova variável com soma de ponteiros
    double somaPonteiros = *ponteiroDecimal + *ponteiroInteiro;

    //Impressão de informações de soma
    printf("Valor de soma ponteiros: %.2f + %i = %.2f", *ponteiroDecimal, *ponteiroInteiro, somaPonteiros);

    getchar();

    return (0);
}