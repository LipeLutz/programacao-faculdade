#include <stdio.h>

/*
    Procedimentos

    São blocos de código que realizam uma tarefa específica, mas não retornam um valor. Eles são definidos com um tipo de retorno void e podem ter parâmetros opcionais.


    Procedimentos são frequentemente usados para modularizar o código, dividindo-o em partes mais gerenciáveis e reutilizáveis.


    Os blocos de códigos são chamados dentro de outros blocos de código para executar suas operações, mas não geram um resultado que precisa ser utilizado imediatamente. Os procedimentos são úteis para organizar e simplificar programas, melhorando a legibilidade e a manutenção do código.

*/
 
// Definição de procedimento para imprimir uma mensagem
void imprimirMensagem() {
    printf("Olá, mundo!\n");
}
 
int main() {
    // Chamada do procedimento
    imprimirMensagem();
    return 0;
}