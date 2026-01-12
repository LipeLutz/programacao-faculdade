#include <stdio.h>

int main() {
  int idade;
  float renda;

  printf("\nDigite a sua idade: ");
  scanf("%d", &idade);
  printf("\nDigite a sua renda mensal: \n");
  scanf("%f", &renda);

  if (idade < 18 || idade > 60) {

    if (renda < 2000.0) {
      printf("\nVocê está qualificado para o desconto especial\n");
    } else {
      printf("\nVocê não está qualificado para o desconto devido à renda\n");
    }

  } else {
    printf("\nVocê não está qualificado para o desconto devido à idade\n");
  }

  return 0;
}