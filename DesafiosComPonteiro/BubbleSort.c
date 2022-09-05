#include <stdio.h>
#include <stdlib.h>

int ordena(int *p, int x, int *copia)
{
    //índice: 0  1  2  3  4
    // valor:  83 31 91 46 27
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (p[i] > p[j])
            {
                *copia = p[i];
                p[i] = p[j];
                p[j] = *copia;
            }
        }
    }
}

int exibir(int *p, int x)
{
    printf("Vetor inicial: int v[10] = {83, 31, 91, 46, 27, 20, 96, 25, 96, 80}; \n\n");
    printf("Vetor Ordenado: int v[10] = {");

    for (int i = 10; i > 0; i--)
    {
        printf(" %i ", p[i - 1]);
    }

    printf("};");
}

int main()
{
    /* ORDENE O VETOR DO MENOR PARA O MAIOR:
    int v[10] = {83, 31, 91, 46, 27, 20, 96, 25, 96, 80};
    //20, 25, 27, 31, 46, 80, 83, 91, 96, 96*/
    int v[10] = {83, 31, 91, 46, 27, 20, 96, 25, 96, 80}, copia;

    ordena(v, 10, &copia);
    exibir(v, 10);

    getchar();
    return (0);
}