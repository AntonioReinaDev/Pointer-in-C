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

Repare que na imagem do código ele irá atribuir um valor a variável e imprimir seu valor e endereçamento, veja a imagem abaixo.
Está imagem é referente a saída de dados do exemplo1.

![image](https://user-images.githubusercontent.com/66280255/188482793-518b8063-89c3-4631-8556-f39a8d1eb4f7.png)

Agora que entendemos como podemos receber o valor do endereço, vamos colocar em prática com um exemplo de ponteiro(exemplo2).

![image](https://user-images.githubusercontent.com/66280255/188488656-7a95c920-2db6-4cd5-9a69-bd31c695ec93.png)

Veja a saída de dados referente ao exemplo2;

![image](https://user-images.githubusercontent.com/66280255/188489150-7be50ceb-53f4-4172-b9a0-f1945d4f0e0c.png)

Agora vamos pensar em uma simples troca de valores em variaveis, ou seja criaremos uma varíavel chamada "valor" de tipo int e atribuiremos o número 10 a ela,
criaremos em seguida outra variável também do tipo int chamata "coletorValor" e iremos atribuir a ela a varíavel "valor". Após isso vamos atribuir o número 30 a variável "valor".

Veja na imagem abaixo como ficará em código(Exemplo3).

![image](https://user-images.githubusercontent.com/66280255/188491506-f41b4f9b-46ce-47e5-8678-e7601bd448b6.png)

A impressão de dados ficará conforme a imagem a seguir(Exemplo3).

![image](https://user-images.githubusercontent.com/66280255/188491544-0612ea33-9aea-4452-965f-59a3f0dc56a0.png)

Agora que entendemos a atribuição de valores de variáveis com outras variáveis do mesmo tipo, vamos agora realizar o mesmo procedimento utilizando ponteiros.
Criamos a variável "valorUm" do tipo int para recebermos o número 10, em seguida criamos o ponteiro chamado "ponteiro" que recebera o endereçamento de memória da variável "valorUm", após isso criamos a variável "valorDois" do tipo int e atribuiremos o número 20 a ela, por fim chamamos nosso ponteiro e atribuimos nossa variável "valorDois" a ele.

--> Lembre-se disso ao atribuirmos um valor a um ponteiro representamos com asterisco da seguinte forma *(nome do ponteiro) = variável pois indicamos que queremos atribuir ao valor referenciado em memória a variável em que ele está apontando. Sem asterisco indicamos que queremos atribuir um valor a sua referência, oque no caso não é possível.

Veja a imagem abaixo o exemplo de código abaixo como ficará essa troca.

![image](https://user-images.githubusercontent.com/66280255/188493699-cf386bc8-8fc0-49ff-b794-7b6a1475598f.png)

A saída de dados ficará da seguinte forma.

![image](https://user-images.githubusercontent.com/66280255/188493789-21c2e4e1-6519-4cb2-87e5-9d60595a8771.png)

