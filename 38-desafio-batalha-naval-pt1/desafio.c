#include <stdio.h>

/*
    Represente o Tabuleiro: Utilize uma matriz (array bidimensional) para representar o tabuleiro do Batalha Naval. Neste nível novato, o tabuleiro terá um tamanho fixo 10x10. Inicialize todas as posições do tabuleiro com o valor 0, representando água.
 
    Posicione os Navios: Declare e inicialize dois vetores (arrays unidimensionais) para representar os navios. Cada navio ocupará um número fixo de posições no tabuleiro (defina esse tamanho, por exemplo, 3 posições). Um navio será posicionado horizontalmente e o outro verticalmente. Represente as posições ocupadas pelos navios na matriz do tabuleiro com o valor 3. Você deverá escolher as coordenadas iniciais de cada navio e garantir que eles estejam completamente dentro dos limites do tabuleiro e não se sobreponham. 
    Dica: O posicionamento do navio pode ser feito copiando o valor 3 de cada posição do vetor do navio para as posições correspondentes na matriz do tabuleiro, de acordo com a orientação (horizontal ou vertical) do navio.
 
    Exiba o Tabuleiro: Utilize loops aninhados e o comando printf para exibir o tabuleiro no console. Mostre a matriz completa, com 0s representando água e 3s representando as partes dos navios. A saída deve ser clara e organizada, permitindo visualizar facilmente a posição dos navios. 
    Dica: Imprima um espaço ou outro caractere separador entre os elementos da matriz para facilitar a visualização.
*/

int main() {
    // 1. Definição das constantes para facilitar a manutenção
    int TAM_TABULEIRO = 10;
    int TAM_NAVIO = 3;
    
    // 2. Representação do Tabuleiro (Matriz 10x10)
    int tabuleiro[10][10];
    
    for(int i = 0; i < TAM_TABULEIRO; i++) {
        for(int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 3. Representação do Navio (Vetor Unidimensional)
    int navio[3] = {3, 3, 3};

    // --- POSICIONAMENTO DO PRIMEIRO NAVIO (HORIZONTAL) ---
    int linha_h = 2;
    int coluna_h = 2;

    if (coluna_h + TAM_NAVIO <= TAM_TABULEIRO) {
        for(int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linha_h][coluna_h + i] = navio[i];
        }
    } else {
        printf("Erro: Navio horizontal fora dos limites!\n");
    }

    // --- POSICIONAMENTO DO SEGUNDO NAVIO (VERTICAL) --
    int linha_v = 5;
    int coluna_v = 8;

    if (linha_v + TAM_NAVIO <= TAM_TABULEIRO && tabuleiro[linha_v][coluna_v] == 0) {
        for(int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linha_v + i][coluna_v] = navio[i];
        }
    } else {
        printf("Erro: Navio vertical fora dos limites ou sobreposicao!\n");
    }

    // 4. Exibição do Tabuleiro
    printf("\n--- BATALHA NAVAL ---\n\n");
    
    for(int i = 0; i < TAM_TABULEIRO; i++) {
        for(int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}