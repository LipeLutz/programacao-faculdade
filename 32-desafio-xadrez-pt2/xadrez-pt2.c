#include <stdio.h>

/*
    O que você vai fazer


    Você deverá implementar, no mesmo programa em C do desafio anterior, a lógica para o movimento do Cavalo. O Cavalo se move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L". Para este desafio, o Cavalo deverá se mover duas casas para baixo e uma casa para a esquerda. Você precisará usar pelo menos dois loops aninhados, sendo um deles obrigatoriamente um loop for. O outro loop pode ser while ou do-while, à sua escolha. Assim como nas outras peças, você imprimirá a direção do movimento a cada casa percorrida.

    Requisitos funcionais

    Entrada de Dados: Os valores para o número de casas a serem movidas (duas para baixo, uma para a esquerda) devem ser definidos no código como variáveis ou constantes.
 
    Lógica de Movimentação: O programa deverá implementar a lógica específica do movimento em "L" do Cavalo usando loops aninhados (um loop for e um loop while ou do-while).
 
    Saída de Dados: O programa deverá imprimir no console a direção de cada etapa do movimento do Cavalo ("Baixo", "Baixo", "Esquerda"), utilizando o comando printf. Para as outras peças as saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");. Separe o movimento do Cavalo dos movimentos anteriores com uma linha em branco.
*/

int main(){
    int torre = 1;
    int bispo = 1;

    // Movimentação da torre
    while (torre <= 5){
        printf("Torre andou para direita %d vez(es) \n", torre);
        torre++;
    }

    printf("\n");

    // Movimentação do Bispo
    do
    {
        printf("Bispo andou para cima, direita %d vez(es) \n", bispo);
        bispo++;
    } while (bispo <= 5);

    printf("\n");
    
    // Movimentação da rainha
    for (int rainha = 1; rainha <= 8; rainha++){
        printf("Rainha andou para a esquerda %d vez(es) \n", rainha);
    }

    printf("\n");

    // Movimentação do cavalo
    int baixo = 2;
    int esquerda = 1;

    for (int i = 0; i < baixo; i++) {   
        printf("Cavalo moveu para baixo\n");

        int j = 0;
        do {
            if (i == baixo - 1) {
                printf("Cavalo moveu para a esquerda\n");
            }
            j++;

        } while (j < esquerda);

    }   
    
}