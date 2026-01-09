#include <stdio.h>

int main(){
    // O long int nos permite armazenar valores muito maiores, de -9,223,372,036,854,775,808 a 9,223,372,036,854,775,807

    int numeroNormal = 2147483647; // Valor máximo de int
    long int numeroGrande = 2147483647;

    printf("Número regular (int): %d\n", numeroNormal);
    printf("Número grande (long int): %ld\n", numeroGrande);

    numeroGrande = 2147483648; // Valor maior que o máximo de int 
    printf("Número grande atualizado (long int): %ld\n", numeroGrande);

    return 0;
}