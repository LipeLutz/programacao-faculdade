#include <stdio.h>

int main(){
    // Função que mostra apenas os números pares da tabuada de cada número

    for(int i = 1; i <= 10; i++){

        for (int j = 0; j <= 10; j++){
            int multiplicacao = i * j;
            
            if(multiplicacao % 2 == 0){
                printf("Múltiplicação do número %d pelo número %d = %d\n", i, j, multiplicacao);
            } 
        }

        printf("\n");

    }
    
    return 0;
}