#include <stdio.h>

int main(){
    int numero, resultado;

    printf("Você deseja saber a tabuada de qual número?: ");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++){
        resultado = numero * i;
        printf("\n");
        printf("%d * %d = %d \n", numero, i, resultado );
    }
    
}