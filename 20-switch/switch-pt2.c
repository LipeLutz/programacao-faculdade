#include <stdio.h>

int main (){
    int dia;

    printf("\nDigite um número de 1 a 7: ");
    scanf("%d", &dia);

    switch(dia){
        case 1:
            printf("\nSegunda-feira \n");
            break;
        case 2:
            printf("\nTerça-feira \n");
            break;
        case 3: 
            printf("\nQuarta-feira \n");
            break;
        case 4:
            printf("\nQuinta-feira \n");
            break;
        case 5:
            printf("\nSexta-feira \n");
            break;
        case 6: 
            printf("\nSábado \n");
            break;
        case 7: 
            printf("\nDomingo \n");
            break;
        default:
            printf("Opção inválida");
    }
    
    return 0;
}