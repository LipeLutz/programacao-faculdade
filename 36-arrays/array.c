#include <stdio.h>

/*  
    Array/Vetores

    Em programação, um array é uma estrutura de dados que armazena uma coleção de elementos do mesmo tipo em locais de memória contíguos (lado a lado). Arrays podem ter uma ou mais dimensões. Um array unidimensional é chamado de vetor.

    Um vetor, portanto, é uma sequência ordenada de elementos, onde cada elemento pode ser acessado diretamente por sua posição na sequência, chamada de índice.

    Matrizes
        
    Uma matriz é um array multidimensional. A matriz mais comum é a bidimensional, que pode ser visualizada como uma tabela organizada em linhas e colunas. Assim como nos vetores, cada elemento em uma matriz pode ser acessado por seus índices, mas agora precisamos de dois índices: um para a linha e outro para a coluna.

    A diferença: 

    Vetores são unidimensionais, matrizes podem ter duas ou mais dimensões
};
    

*/

int main()
{   
    // Array
    int numeros[5] = {10, 20, 30, 40, 50};

    // Matriz
    int tabela[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Acessando e imprimindo elementos específicos do array
    printf("O primeiro elemento é %d\n", numeros[0]);
    printf("O terceiro elemento é %d\n", numeros[2]);
    printf("O quinto elemento é %d\n", numeros[4]);
 
    return 0;
}