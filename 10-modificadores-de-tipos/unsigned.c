#include <stdio.h>

// O int normal, armazena valores de -2.147.483.648 a 2.147.483.647
// O unsigned int, não aceita valores negativos, porém armazena valores de 0 a 4.294.967.295

// O unsigned também pode ser utilizado para variáveis char
// O char pode armazenar valores que vão de -128 a 127
// Usando o unsigned, também nos limitamos só aos números positivos, porém a margem aumenta, permitindo armazenar valores de 0 até 255

int main(){
    int numeroComSinal = 3000000000;
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com sinal: %d\n", numeroComSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal);

    return 0;
}