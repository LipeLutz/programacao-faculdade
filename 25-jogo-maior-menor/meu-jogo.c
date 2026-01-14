#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeroUsuario, numeroComputador, palpite;
    char* resultado; 

    srand(time(0));
    numeroComputador = rand() % 100 + 1;

    printf("\n");
    printf("Seja bem vindo ao Jogo maior ou menor \n");
    printf("O objetivo desse jogo, é escolher seu número, e prever se seu número vai ser maior ou menor que o escolhido pelo computador \n");
    printf("\n");

    printf("Para começar, digite um número de 1 a 100: ");
    scanf("%d", &numeroUsuario);
    printf("\n");

    if(numeroUsuario > 100 || numeroUsuario < 1){
        printf("O número escolhido não respeita as regras do jogo, escolha outro número.");
        return 0;
    }

    printf("Agora, escolha uma das opções abaixo:");
    printf("\n");

    printf("1 - Se você acha que seu número vai ser MAIOR que o do computador, digite 1 \n");
    printf("2 - Se você acha que seu número vai ser IGUAL ao do computador, digite 2 \n");
    printf("3 - Se você acha que seu número vai ser MENOR que o do computador, digite 3 \n");

    printf("\n");
    printf("Digite aqui seu palpite: ");
    scanf("%d", &palpite);
    printf("\n");

    printf("Número escolhido pelo usuário: %d\n", numeroUsuario);
    printf("Número escolhido pelo computador: %d\n", numeroComputador);

    switch (palpite){
        case 1:
            numeroUsuario > numeroComputador 
                ? 
                printf("Parabéns, você ganhou!!! Seu número escolhido realmente maior que  o do computador.")
                :
                printf("Você perdeu, o número que o computador escolheu é maior que o seu.")
            ;
        break;

        case 2:
            numeroUsuario == numeroComputador 
                ? 
                printf("Parabéns, você ganhou!!! Seu número escolhido realmente é igual ao do computador.")
                :
                printf("Você perdeu, o número que você escolheu é diferente do escolhido pelo computador")
            ;
        break;

        case 3:
            numeroUsuario < numeroComputador 
                ? 
                printf("Parabéns, você ganhou!!! Seu número escolhido realmente é menor que o do computador.")
                :
                printf("Você perdeu, o número escolhido pelo computador é menor que o seu")
            ;
        break;

        default:
            printf("Opção inválida!");
            break;
    }
    

    return 0;
}