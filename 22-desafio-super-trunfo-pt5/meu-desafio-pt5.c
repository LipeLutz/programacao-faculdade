#include <stdio.h>

/*
    Parte 5 do desafio do super trunfo

    Menu Interativo: Criar um menu interativo no terminal usando a estrutura switch que permita ao jogador escolher qual atributo será usado para comparar as cartas. O menu deve ser claro e fácil de usar.
 
    Comparação de Atributos: Implementar a lógica de comparação entre duas cartas com base no atributo selecionado pelo jogador. Os atributos disponíveis são:
    
    Nome do país (string - usado apenas para exibir informações, não para comparação direta)
    
    População (int)
    
    Área (float)
    
    PIB (float)
    
    Número de pontos turísticos (int)
    
    Densidade demográfica (float - já calculada no desafio anterior).
    
    Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.
    
    Exibição do Resultado: Mostrar na tela, de forma clara, o resultado da comparação, incluindo:
    
    O nome dos dois países.
    O atributo usado na comparação.
    Os valores do atributo para cada carta.
    Qual carta venceu.
    Em caso de empate, exibir a mensagem "Empate!".
*/

int main()
{
    char state, state2;
    char state3;
    char cardCode[4], cardCode2[4], city[50], city2[50];
    int places, places2, populationBattle, areaBattle, pibBattle, placesBattle, populationDensityBattle, pibPerCapitaBattle, powerBattle,
    atribute;
    unsigned long int population, population2;
    float area, area2, pib, pib2, populationDensity, pibPerCapita, populationDensity2, pibPerCapita2, superPower, superPower2;

    printf("Seja bem vindo ao super trunfo! \n");

    // Cadastro da primeira carta
    printf("Digite uma letra de A a H: ");
    scanf("%c", &state);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", cardCode);

    printf("Digite o nome da cidade: ");
    scanf("%s", city);

    printf("Digite o número de habitantes: ");
    scanf("%lu", &population);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turístisticos da cidade: ");
    scanf("%d", &places);
    printf("\n");

    populationDensity = population / area;
    pibPerCapita = (pib * 1000000000) / population;
    superPower = population + area + pib + places + populationDensity;

    // Exibição da primeira carta
    printf("Estado: %c\n", state);
    printf("Código: %s\n", cardCode);
    printf("Nome da cidade: %s\n", city);
    printf("População: %lu\n", population);
    printf("Área: %.2fKm²\n ", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n", places);
    printf("Densidade populacional: %.2fhab/km²\n", populationDensity);
    printf("Pib per capita: %.2f reais\n", pibPerCapita);
    printf("Poder total carta 1: %.2f\n", superPower);

    printf("\n");
    printf("Vamos para a segunda carta\n");
    printf("\n");

    // Cadastro da segunda carta
    printf("Digite uma letra de A a H: ");
    scanf(" %c", &state2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf(" %s", cardCode2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", city2);

    printf("Digite o número de habitantes: ");
    scanf(" %lu", &population2);

    printf("Digite a área da cidade: ");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turístisticos da cidade: ");
    scanf(" %d", &places2);
    printf("\n");

    populationDensity2 = population2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / population2;
    superPower2 = population2 + area2 + pib2 + places2 + populationDensity2;

    // Exibição da segunda carta

    printf("Segunda carta: \n");
    printf("\n");
    printf("Estado: %c\n", state2);
    printf("Código: %s\n", cardCode2);
    printf("Nome da cidade: %s\n", city2);
    printf("População: %lu\n", population2);
    printf("Área: %.2fKm²\n ", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", places2);
    printf("Densidade populacional: %.2fhab/km²\n", populationDensity2);
    printf("Pib per capita: %.2f reais\n", pibPerCapita2);
    printf("Poder total carta 2: %.2f\n", superPower2);

    printf("\n");
    printf("** Comparações entre as cartas **\n");
    printf("\n");

    printf("Atributos disponíveis para comparação: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. Pib \n");
    printf("4. Número de pontos turísticos \n");
    printf("5. Densidade demográfica \n");
    printf("6. Pib per capita \n");
    printf("7. Poder total \n");

    printf("\nQual atributo você deseja comparar?");
    scanf("%d", &atribute);


    switch (atribute){
        case 1:
            printf("\nPopulação total da carta 1 (%s): %lu\n", city, population);
            printf("População total da carta 2 (%s): %lu\n", city2, population2);

            if(population > population2){
                printf("Carta 1 (%s) venceu\n", city);
                printf("\n");
            } else{
                printf("Carta 2 (%s) venceu\n", city2);
                printf("\n");
            }
        break;

        case 2:
            printf("\nÁrea total da carta 1 (%s): %lu\n", city, area);
            printf("Área total da carta 2 (%s): %lu\n", city2, area2);

            if(area > area2){
                printf("Carta 1 (%s) venceu\n", city);
                printf("\n");
            } else{
                printf("Carta 2 (%s) venceu\n", city2);
                printf("\n");
            }
        break;

        case 3:
        
            printf("\nPib total da carta 1 (%s): %lu\n", city, pib);
            printf("Pib total da carta 2 (%s): %lu\n", city2, pib);

            if(pib > pib2){
                printf("Carta 1 (%s) venceu\n", city);
                printf("\n");
            } else{
                printf("Carta 2 (%s) venceu\n", city2);
                printf("\n");
            }
        break;

        case 4:
        
            printf("\nTotal de pontos turísticos da carta 1 (%s): %lu\n", city, places);
            printf("Total de pontos turísticos da carta 2 (%s): %lu\n", city2, places2);

            if(places > places2){
                printf("Carta 1 (%s) venceu\n", city);
                printf("\n");
            } else{
                printf("Carta 2 (%s) venceu\n", city2);
                printf("\n");
            }
        break;

        case 5:
        
            printf("\nDensidade populacional da carta 1 (%s): %lu\n", city, populationDensity);
            printf("Densidade populacional da carta 2 (%s): %lu\n", city2, populationDensity2);

            if(populationDensity < populationDensity2){
                printf("Carta 1 (%s) venceu\n", city);
                printf("\n");
            } else{
                printf("Carta 2 (%s) venceu\n", city2);
                printf("\n");
            }
        break;

        case 6:
        
            printf("\nPib per capita total da carta 1 (%s): %lu\n", city, pibPerCapita);
            printf("Pib per capita total da carta 2 (%s): %lu\n", city2, pibPerCapita2);

            if(pibPerCapita > pibPerCapita){
                printf("Carta 1 (%s) venceu\n", city);
                printf("\n");
            } else{
                printf("Carta 2 (%s) venceu\n", city2);
                printf("\n");
            }
        break;

        case 7:
        
            printf("\nPoder total da carta 1 (%s): %lu\n", city, superPower);
            printf("Poder total da carta 2 (%s): %lu\n", city2, superPower2);

            if(superPower > superPower2){
                printf("Carta 1 (%s) venceu\n", city);
                printf("\n");
            } else{
                printf("Carta 2 (%s) venceu\n", city2);
                printf("\n");
            }
        break;
    
        default:
            printf("Opção inválida!");
        break;
    }

    return 0;
}
