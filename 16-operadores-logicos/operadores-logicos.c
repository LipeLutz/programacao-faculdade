#include <stdio.h>
    
int main(){

    int a = 2;
    int b = 9;
    int c = 0;

    /* Operador lógico AND (&&) */
    
    // O operador && retorna verdadeiro se e somente se ambas as expressões que ele conecta forem verdadeiras. Se qualquer uma das expressões for falsa, o resultado será falso.

    if(a > 0 && b < 10){
        printf("\nAmbas as afirmações são verdadeiras\n");
    }

    /* Operador lógico OR (||) */

    // O operador || retorna verdadeiro se pelo menos uma das expressões que ele conecta for verdadeira. Se ambas as expressões forem falsas, o resultado será falso.

    if(a > 0 || b < 10){
        printf("\nPelo menos 1 afirmação é verdadeira\n");
    }

    /* Operador lógico NOT (!) */

    // O operador ! inverte o valor lógico de uma expressão. Se a expressão for verdadeira, ele retorna falso, e se a expressão for falsa, ele retorna verdadeiro.

    if (!c) {
        printf("C é zero.\n");
    }

    return 0;
}