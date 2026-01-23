#include <stdio.h>

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
    
    // Movimentação da rainha
    for (int rainha = 1; rainha <= 8; rainha++){
        printf("Rainha andou para a esquerda %d vez(es) \n", rainha);
    }
    
}