#include <stdio.h>

int main() {
  int idade, dependentes;
  float renda;

  printf("\nDigite a sua idade: ");
  scanf("%d", &idade);
  printf("\nDigite a sua renda mensal: ");
  scanf("%f", &renda);
  printf("\nDigite o número de dependentes: ");
  scanf("%d", &dependentes);

  if (idade >= 18 && idade <= 65) {
    if (renda < 3000.0) {
      if (dependentes > 2) {
        printf("\nVocê está qualificado para os benefícios sociais!\n");
      } else {
        printf("\nVocê não está qualificado para os benefícios devido ao número de dependentes\n");
      }
    } else {
      printf("\nVocê não está qualificado para os benefícios devido à renda\n");
    }
  } else {
    printf("\nVocê não está qualificado para os benefícios devido à idade\n");
  }

  return 0;
}
