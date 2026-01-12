#include <stdio.h>
/*
  () []	esquerda para a direita
  ! - ++ --	direita para a esquerda
  * / %	esquerda para a direita
  + -	esquerda para a direita
  < <= > >=	esquerda para a direita
  == !=	esquerda para a direita
  &&	esquerda para a direita
  ||	esquerda para a direita
  = += -= *= /= %=	direita para a esquerda
  ,	esquerda para a direita
*/

int main() {
  int a = 5;
  int b = -10;
  int c = 0;

  if (a > 0 && b < 0 || c == 0) {
    printf("\nA condição é verdadeira\n");
  } else {
    printf("\nA condição é falsa\n");
  }

  return 0;
}