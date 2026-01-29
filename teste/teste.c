#include <stdio.h>

int main(){
    char letra;

    printf("Digite uma letra minúscula: ");
    scanf("%c", &letra);

    letra = letra + ('A' - 'a');

    printf("Caractere = %c \n", letra);

    return 0;
}