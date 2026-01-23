#include <stdio.h>
 
/*
    A estrutura de repetição do-while é uma variante do loop while, com uma característica distintiva: garante que o bloco de código dentro do loop seja executado pelo menos uma vez, independentemente da condição. Essa diferença torna o do-while útil em situações em que a ação deve ser executada antes de a condição ser testada.
*/

int main() {
    int i = 1;
   
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
   
    return 0;
}