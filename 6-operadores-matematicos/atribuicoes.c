#include <stdio.h>

int main(){
    /*
    Atribuição simples (=)
    Atribuição com soma (+=)
    Atribuição com subtração (-=)
    Atribuição com multiplicação (*=)
    Atribuição com divisão (/=)
    */

    int numero1, numero2, resultado;

    resultado = 10;
    printf("Resultado: %d\n", resultado);

    resultado += 20;
    printf("Novo resultado (soma): %d\n", resultado);

    resultado -= 10;
    printf("Novo resultado (subtração): %d\n", resultado);

    resultado *= 2;
    printf("Novo resultado (multiplicação): %d\n", resultado);

    resultado /= 4;
    printf("Novo resultado (Divisão): %d\n", resultado);

    return 0;
}