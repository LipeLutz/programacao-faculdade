#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gerar número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; //Número entre 1 e 100;

    //Início do jogo
    printf("Bem vindo ao jogo Maior, Menor ou Igual! \n");
    printf("Você deve escolher um número e o tipo de comparação/ \n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &tipoComparacao);
    
    printf("Digite seu número (entre 1 e 100): ");
    scanf("%d", &numeroJogador);

    //Exibir o número do computador

    printf("O número do computador é: %d\n", numeroComputador);

    switch (tipoComparacao) {
        case 'M':
        case 'm':
            resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;

        case 'N':
        case 'n':
            resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;

        case 'I':
        case 'i':
            resultado = numeroJogador == numeroComputador ? 1 : 0;
        break;
        
        default:
            printf("Opção inválida! \n");
            break;
    }

    if(resultado == 1){
        printf("Você venceu!! \n");
    } else{
        printf("Você perdeu! \n");
    }
}