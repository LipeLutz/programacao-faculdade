#include <stdio.h>

/*
    A estrutura de repetição while é uma estrutura fundamental para criação de loops na programação. Em sua essência, o while executa repetidamente um bloco de código enquanto uma condição especificada é verdadeira. Assim que a condição se torna falsa, o loop termina e o controle do programa passa para a linha de código imediatamente após o loop.
*/
 
int main() {
    int i = 1;
   
    while (i <= 5) {
        printf("\n");
        printf("%d\n", i);
        i++;
    }
   
    return 0;
}