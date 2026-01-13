#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("Jogo de Jokenpô \n");
    
    printf("1. Pedra \n");
    printf("2. Papel \n");
    printf("3. Tesoura \n");

    printf("Escolha uma opção: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch(escolhaJogador){
        case 1:
            printf("\nEscolha do jogador: %d. Pedra\n", escolhaJogador);
            
            switch (escolhaComputador){
                case 1:
                    printf("Escolha do computador: %d. Pedra\n", escolhaComputador);
                    printf("Resultado: Empate, pois os 2 escolheram pedra\n");
                break;

                case 2:
                    printf("Escolha do computador: %d. Papel\n", escolhaComputador);
                    printf("Resultado: Computador ganhou, pois papel embrulha pedra\n");
                break;

                case 3:
                    printf("Escolha do computador: %d. Tesoura\n", escolhaComputador);
                    printf("Resultado: Jogador ganhou, pois pedra quebra tesoura\n");
                break;
            }

        break;

        case 2:
            printf("\nEscolha do jogador: %d. Papel\n", escolhaJogador);
            
            switch (escolhaComputador){
                case 1:
                    printf("Escolha do computador: %d. Pedra\n", escolhaComputador);
                    printf("Resultado: Jogador ganhou, pois papel embrulha pedra\n");
                break;

                case 2:
                    printf("Escolha do computador: %d. Papel\n", escolhaComputador);
                    printf("Resultado: Empate, pois os dois escolheram papel\n");
                break;

                case 3:
                    printf("Escolha do computador: %d. Tesoura\n", escolhaComputador);
                    printf("Resultado: Computador ganhou, pois tesoura corta papel\n");
                break;
            }

        break;

        case 3:
            printf("\nEscolha do jogador: %d. Tesoura\n", escolhaJogador);
            
            switch (escolhaComputador){
                case 1:
                    printf("Escolha do computador: %d. Pedra\n", escolhaComputador);
                    printf("Resultado: Computador ganhou, pois pedra quebra tesoura\n");
                break;

                case 2:
                    printf("Escolha do computador: %d. Papel\n", escolhaComputador);
                    printf("Resultado: Jogador ganhou, pois tesoura corta papel\n");
                break;

                case 3:
                    printf("Escolha do computador: %d. Tesoura\n", escolhaComputador);
                    printf("Empate, pois os dois escolheram tesoura\n");
                break;
            }

        break;

        default:
            printf("Opção inválida.");
    }

    return 0;
}