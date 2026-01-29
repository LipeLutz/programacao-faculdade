#include <stdio.h>

/*
    Loops com atualizações complexas

    São loops em que a variável de controle é modificada de maneiras mais sofisticadas que simples incrementos ou decrementos. Esses loops frequentemente utilizam expressões condicionais, cálculos matemáticos ou funções para alterar a variável de controle a cada iteração. Isso permite uma maior flexibilidade e controle sobre o fluxo do loop, adaptando-se a requisitos específicos ou padrões de iteração não lineares.
*/
 
int main() {
    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2) {
        printf("%d ", i);
    }
    return 0;
}