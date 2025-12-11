#include <stdio.h>

int main(){
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Digite um segundo número: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("O resultado da soma dos dois número escolhidos é: %d\n", soma);
    printf("O resultado da subtração dos dois número escolhidos é: %d\n", subtracao);
    printf("O resultado da multiplicação dos dois número escolhidos é: %d\n", multiplicacao);
    printf("O resultado da divisão dos dois número escolhidos é: %d\n", divisao);

    return 0;
}