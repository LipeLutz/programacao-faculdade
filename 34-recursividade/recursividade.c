#include <stdio.h>

/*
    É um conceito importante em programação, em que uma função chama a si mesma para resolver problemas de forma mais simples e eficiente.


    Recursividade é uma técnica que pode ser usada para substituir loops, dividir problemas complexos em partes menores e simplificar a lógica de muitos algoritmos.
*/
 
// Função recursiva para imprimir números de n até 1
void recursiveLoop(int n) {
    if (n > 0) {
        printf("%d ", n);  // Imprime o valor atual de n
        recursiveLoop(n - 1);  // Chama a si mesma com n - 1
    }
}
 
int main() {
    int numero = 5;
    printf("Contagem regressiva: \n");
    recursiveLoop(numero);
    return 0;
}