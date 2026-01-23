#include <stdio.h>
 
/*
    A estrutura de repetição "for" é uma das mais utilizadas na programação devido à sua capacidade de simplificar a execução de loops com um número específico de iterações. Diferentemente dos loops while e do-while, que se baseiam exclusivamente em uma condição, o for é especialmente útil quando se sabe de antemão quantas vezes o loop deve ser executado.
*/

int main() {
    
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
   
    return 0;
}