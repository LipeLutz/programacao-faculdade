#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-incremento (++a)
    Pós-incremento (a++)
    Decremento (--)
    Pré-drecremento (--a)
    Pré-drecremento (a--)
    */

    int numero = 1, resultado;

    // Incremento
    printf("Antes do incremento: %d\n", numero);
    numero++;
    printf("Após o incremento: %d\n", numero);

    //Decremento
    numero--;
    printf("Após o decremento: %d\n", numero);

    //Pós incremento
    //Resultado = numero -> numero + 1
    //Incrementa a variável após seu uso
    resultado = numero++;
    //Após a execução, resultado = 1 e número = 2
    printf("Após o pós incremento - Número 1: %d - Resultado: %d\n", numero, resultado);

    //Pré incremento
    //Resultado = número + 1 -> numero
    //Incrementa a variável antes de seu uso
    resultado = ++numero;
    //Após a execução, resultado = 3 e número = 3
    printf("Após o pré incremento - Número 1: %d - Resultado: %d\n", numero, resultado);

    //Pós decremento
    resultado = numero--;
    printf("Após o pós decremento - Número 1: %d - Resultado: %d\n", numero, resultado);

    //Pré decremento
    resultado = --numero;
    printf("Após o pré decremento - Número 1: %d - Resultado: %d\n", numero, resultado);

    return 0;
}