#include <stdio.h>

/*
    O que você vai fazer

    Você deverá modificar o programa em C, que já contém a movimentação da Torre, Bispo, Rainha e Cavalo, realizando as seguintes alterações:

    Recursividade: Substitua os loops simples que controlam os movimentos da Torre, Bispo e Rainha por funções recursivas. Cada função recursiva deverá simular o movimento da respectiva peça, imprimindo a direção correta a cada casa.
    
    Loops Complexos para o Cavalo: Aprimore a movimentação do Cavalo, utilizando loops aninhados com múltiplas variáveis e/ou condições. Você pode usar continue e break para controlar o fluxo do loop de forma mais precisa. O movimento do Cavalo agora será para cima e para a direita, em "L" (duas casas para cima e uma para a direita).
    
    Bispo com Loops Aninhados: O Bispo deve ser implementado com recursividade, e também com loops aninhados, utilizando o loop mais externo para o movimento vertical, e o mais interno para o movimento horizontal.

    Requisitos funcionais

    Entrada de Dados: Os valores para o número de casas a serem movidas (para recursão) e as condições dos loops (para o Cavalo) devem ser definidos diretamente no código, como variáveis ou constantes.
    
    Recursividade (Torre, Bispo e Rainha): Implemente funções recursivas para simular o movimento de cada peça, substituindo os loops originais.
    
    Loops Complexos (Cavalo): Utilize loops aninhados com múltiplas variáveis e/ou condições para simular o movimento do Cavalo em "L" (duas casas para cima e uma para a direita).
    
    Loops Aninhados (Bispo): Utilize loops aninhados para o bispo, sendo o loop mais externo o vertical, e o mais interno o horizontal.
    
    Saída de Dados: O programa deverá imprimir no console, de forma clara e organizada, a direção do movimento a cada casa percorrida por cada peça. Utilize o comando printf para exibir as informações. As saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");. Utilize linhas em branco para separar a saída de cada peça.

*/


/* Função responsável pela movimentação da torre */
void movimentoTorre(int casas){
    if(casas > 0){
        printf("Direita \n");
        movimentoTorre(casas - 1);
    }
}

void movimentoBispo(int casas){
    if (casas > 0) {

        for(int vertical = 0; vertical < 1; vertical++) { 
            printf("Cima\n");
            
            for(int horizontal = 0; horizontal < 1; horizontal++) {
                printf("Direita\n");
            }
        }
        
        // Chama a função novamente para o próximo passo diagonal
        movimentoBispo(casas - 1);
    }
}

void movimentoRainha(int casas){
    if(casas > 0){
        for (int rainha = 0; rainha < 1; rainha++){
            printf("Esquerda \n");
        }

        movimentoRainha(casas - 1);
    }
}

int main(){

    /* Torre */
    printf("--- Movimento da Torre ---\n");
    movimentoTorre(5); // Chamada da função que movimenta a torre
    printf("\n");

    /* Bispo */
    printf("--- Movimento do Bispo ---\n");
    movimentoBispo(5);// Chamada da função que movimenta o bispo
    printf("\n");

    /* Rainha */
    printf("--- Movimento da rainha ---\n");
    movimentoRainha(8); //Chamada da função que movimenta a rainha
    printf("\n");

    /* Cavalo */
    printf("--- Movimento do cavalo ---\n");
    int baixo = 2;
    int esquerda = 1;

    for (int i = 0, j = 0; i < 2; i++){ 
        printf("Cima\n");
        
        if (i == 1) {
            while (j < 1) { 
                printf("Direita\n");
                j++;
            }
        }
    }

    return 0;
}