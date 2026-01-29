#include <stdio.h>

/*
    Loops com condições múltiplas

    Utilizam mais de uma condição para determinar quando devem continuar ou parar. Isso é frequentemente realizado com o loop for, em que a expressão de condição pode incluir múltiplas condições combinadas usando operadores lógicos (“&&” para E lógico e “||” para OU lógico).


    Loops com condições múltiplas são úteis para situações em que o controle do loop depende de várias variáveis ou condições que precisam ser verificadas simultaneamente.
*/
 
int main() {
    for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}