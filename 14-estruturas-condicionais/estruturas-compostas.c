#include <stdio.h>

int main() {
    int numero1 = 8;
    int numero2 = 5;

    if(numero1 > numero2){
        printf("\nNúmero 1 é maior que número 2 \n");
    } else{
        printf("\nNúmero 1 NÃO é maior que número 2 \n");
    }

    /*-------------------------------------------------------*/

    int idade = 18;

    if(idade >= 18){
        printf("\nVocê é maior de idade \n");
    } else{
        printf("\nVocê é menor de idade");
    }

    /*----------------------------------------------------------*/

    int numero3 = 35;

    if(numero3 % 2 == 0){
        printf("\n %d é um número par \n", numero3);
    } else{
        printf("\n %d é um número ímpar \n", numero3);
    }

    return 0;
}