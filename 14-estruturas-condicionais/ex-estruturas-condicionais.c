#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo;

    estoqueMinimo = 400;

    printf("\nDigite a temperatura: ");
    scanf("%f", &temperatura);

    printf("Digite a umidade: ");
    scanf("%f", &umidade);

    printf("Digite o estoque: ");
    scanf("%u", &estoque);

    if(temperatura > 30){
        printf("\nTemperatura está alta \n");
    } else{
        printf("\nTemperatura está dentro da normalidade \n");
    }

    if(umidade > 50){
        printf("\nUmidade está alta \n");
    } else{
        printf("\nUmidade está dentro da normalidade \n");
    }

    if(estoque < estoqueMinimo){
        printf("Estoque abaixo do mínimo. \n");
    } else{
        printf("Estoque dentro estoque mínimo \n");
    }

    return 0;
}