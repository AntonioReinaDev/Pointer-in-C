# Pointer in C

## Introduction to pointers with C

### The introduction was developed using the tools below:

* [C language](https://docs.microsoft.com/pt-br/cpp/c-language/?view=msvc-170)
* [Visual Studo Code](https://code.visualstudio.com/)

### O que são ponteiros em C?

Um ponteiro é uma variável que armazena o endereço de memória de um objeto. Os ponteiros são usados extensivamente em C e C++ para três finalidades principais: 

* Para alocar novos objetos no heap.
* Para passar funções para outras funções. 
* Para iterar sobre elementos em matrizes ou outras estruturas de dados.

### Oque é Heap?

O heap é o local de memória adequado para alocar muitos objetos grandes, pois esta seção do programa é bem maior que a pilha, e seu tamanho é limitado apenas pela memória virtualdisponível na sua máquina. 
Os objetos alocados no heap são todos aqueles alocados usando new ou malloc() (objetos alocados dinamicamente).

A imagem a seguir é uma ilustração de como está ocorrendo os dados em memória.Note que temos a variável armazenada com seu valor, e ao lado temos o endereçamento
de memória, que no caso é a referência para o ponteiro.

![ponteiroC](https://user-images.githubusercontent.com/66280255/188481974-074c52fe-f671-40e0-badf-84019591b052.PNG)

Agora que temos uma base simples, vamos entender como ocorre o funcionamento no código. 

![image](https://user-images.githubusercontent.com/66280255/188482042-38ca954a-d2a6-4089-86b7-034b06fd7c76.png)

Repare que na imagem do código ele irá atribuir um valor a variável e imprimir seu valor e endereçamento, veja a imagem a baixo.
Está imagem é referente a saída de dados do exemplo1.

![image](https://user-images.githubusercontent.com/66280255/188482793-518b8063-89c3-4631-8556-f39a8d1eb4f7.png)

Agora que entendemos como podemos receber o valor do endereço, vamos colocar em prática com um exemplo de ponteiro(exemplo2).

![image](https://user-images.githubusercontent.com/66280255/188488656-7a95c920-2db6-4cd5-9a69-bd31c695ec93.png)

Veja a saída de dados referente ao exemplo2;

![image](https://user-images.githubusercontent.com/66280255/188489150-7be50ceb-53f4-4172-b9a0-f1945d4f0e0c.png)

