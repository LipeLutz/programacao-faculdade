#include <stdio.h>
 
/*
    Loops com múltiplas variáveis

    Técnica em que muitas variáveis são inicializadas, testadas e atualizadas simultaneamente dentro de um único loop.

    O método de loops com múltiplas variáveis é útil quando precisamos controlar ou monitorar mais de um valor ao mesmo tempo.

    No contexto de um loop for, podemos inicializar diversas variáveis, definir condições de continuidade para todas elas e atualizá-las a cada iteração do loop. Isso é particularmente útil para problemas que envolvem iterações dependentes de múltiplas variáveis ou para manipulações complexas de dados.
*/

int main() {
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
} 