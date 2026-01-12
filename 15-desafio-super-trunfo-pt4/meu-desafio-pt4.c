#include <stdio.h>

/*
    Parte 3 do desafio super trunfo

    Seu programa em C deverá:

    Receber os dados de duas cartas: O programa deve receber os dados de duas cartas do Super Trunfo. Utilize o código desenvolvido no desafio anterior para o cadastro das cartas. As cartas devem conter os seguintes atributos:

    Estado (string)

    Código da carta (string)

    Nome da cidade (string)

    População (int)

    Área (float)

    PIB (float)

    Número de pontos turísticos (int)

    Calcular Densidade Populacional e PIB per capita: O programa deve calcular e exibir:

    Densidade Populacional: População / Área

    PIB per capita: PIB / População

    Comparar um atributo escolhido: Você deverá escolher apenas um dos atributos numéricos (População, Área, PIB, Densidade Populacional ou PIB per capita) para realizar a comparação entre as duas cartas. Essa escolha deve ser feita diretamente no código, não pela entrada do usuário.

    Determinar a carta vencedora:

    Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence.

    Para Densidade Populacional, a carta com o menor valor vence.

    Exibir o resultado da comparação: O programa deve exibir, de forma clara, qual carta venceu a comparação, incluindo o atributo utilizado na comparação e os valores das duas cartas para aquele atributo. Exemplo:

    Comparação de cartas (Atributo: População):

    Carta 1 - São Paulo (SP): 12.300.000

    Carta 2 - Rio de Janeiro (RJ): 6.000.000

    Resultado: Carta 1 (São Paulo) venceu!
*/

int main()
{
    char state, state2;
    char state3;
    char cardCode[4], cardCode2[4], city[50], city2[50];
    int places, places2, populationBattle, areaBattle, pibBattle, placesBattle, populationDensityBattle, pibPerCapitaBattle, powerBattle;
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
    printf("Comparações entre as cartas \n");
    printf("\n");

    // Comparações entre as cartas

    /* População */
    if(population > population2){
        printf("População total da carta 1: %lu\n", population);
        printf("População total da carta 2: %lu\n", population2);
        printf("Carta 1 (%s) venceu\n", city);
        printf("\n");
    } else{
        printf("População total da carta 1: %lu\n", population);
        printf("População total da carta 2: %lu\n", population2);
        printf("Carta 1 (%s) venceu\n", city2);
        printf("\n");
    }

    /* Área */
    if(area > area2){
        printf("Área total da carta 1: %f\n", area);
        printf("Área total da carta 2: %f\n", area2);
        printf("Carta 1 (%s) venceu\n", city);
        printf("\n");
    } else{
        printf("Área total da carta 1: %lu\n", area);
        printf("Área total da carta 2: %lu\n", area2);
        printf("Carta 2 (%s) venceu\n", city2);
        printf("\n");
    }

    /* Pib */
    if(pib > pib2){
        printf("Pib total da carta 1: %f\n", pib);
        printf("Pib total da carta 2: %f\n", pib2);
        printf("Carta 1 (%s) venceu\n", city);
        printf("\n");
    } else{
        printf("Pib total da carta 1: %f\n", pib);
        printf("Pib total da carta 2: %f\n", pib2);
        printf("Carta 2 (%s) venceu\n", city2);
        printf("\n");
    }

    /* Pontos turísticos */
    if(places > places2){
        printf("Total de pontos turísticos da carta 1: %d\n", places);
        printf("Total de pontos turísticos da carta 2: %d\n", places2);
        printf("Carta 1 (%s) venceu\n", city);
        printf("\n");
    } else{
        printf("Total de pontos turísticos da carta 1: %d\n", places);
        printf("Total de pontos turísticos da carta 2: %d\n", places2);
        printf("Carta 2 (%s) venceu\n", city2);
        printf("\n");
    }
    
    /* Densidade populacional */
    if(populationDensity < populationDensity2){
        printf("Densidade populacional da carta 1: %f\n", populationDensity);
        printf("Densidade populacional da carta 2: %f\n", populationDensity2);
        printf("Carta 1 (%s) venceu\n", city);
        printf("\n");
    } else{
        printf("Densidade populacional da carta 1: %f\n", populationDensity);
        printf("Densidade populacional da carta 2: %f\n", populationDensity2);
        printf("Carta 2 (%s) venceu\n", city2);
        printf("\n");
    }

    /* Pib Per capita */
    if(pibPerCapita > pibPerCapita2){
        printf("Pib per capita da carta 1: %f\n", pibPerCapita);
        printf("Pib per capita da carta 2: %f\n", pibPerCapita2);
        printf("Carta 1 (%s) venceu\n", city);
        printf("\n");
    } else{
        printf("Pib per capita da carta 1: %f\n", pibPerCapita);
        printf("Pib per capita da carta 2: %f\n", pibPerCapita2);
        printf("Carta 2 (%s) venceu\n", city2);
        printf("\n");
    }

    /* Poder total */
    if(superPower > superPower2){
        printf("Poder total da carta 1: %f\n", superPower);
        printf("Poder total da carta 2: %f\n", superPower2);
        printf("Carta 1 (%s) venceu\n", city);
    } else{
        printf("Poder total da carta 1: %f\n", superPower);
        printf("Poder total da carta 2: %f\n", superPower2);
        printf("Carta 2 (%s) venceu\n", city2);
    }

    return 0;
}
