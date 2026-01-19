#include <stdio.h>

/*
    Parte 6 do desafio do super trunfo

    Escolha de Dois Atributos: O sistema deve permitir que o jogador escolha dois atributos numéricos diferentes para a comparação das cartas, através de menus interativos. Implemente a lógica necessária para garantir que o jogador não possa selecionar o mesmo atributo duas vezes.

    Comparação com Múltiplos Atributos: Implemente a lógica para comparar as duas cartas com base nos dois atributos escolhidos. Para cada atributo, a regra geral é: vence a carta com o maior valor. A exceção continua sendo a Densidade Demográfica, onde vence a carta com o menor valor.

    Soma dos Atributos: Após comparar os dois atributos individualmente, o sistema deve somar os valores dos atributos para cada carta. A carta com a maior soma vence a rodada.

    Tratamento de Empates: Implemente a lógica para tratar empates. Se a soma dos atributos das duas cartas for igual, exiba a mensagem "Empate!".

    Menus Dinâmicos: Crie menus interativos e dinâmicos usando switch. "Dinâmicos" significa que, por exemplo, após o jogador escolher o primeiro atributo, esse atributo não deve mais aparecer como opção para a escolha do segundo atributo.

    Exibição Clara do Resultado: Mostre o resultado da comparação de forma clara e organizada, incluindo:

    O nome dos dois países.

    Os dois atributos usados na comparação.

    Os valores de cada atributo para cada carta.

    A soma dos atributos para cada carta.

    Qual carta venceu (ou se houve empate).
*/

/*
    Carta 1:

    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50

    Carta 2:
    Estado: B
    Código: B02
    Nome da Cidade: Rio de Janeiro
    População: 6748000
    Área: 1200.25 km²
    PIB: 300.50 bilhões de reais
    Número de Pontos Turísticos: 30

*/

int main()
{
    char state, state2;
    char state3;
    char cardCode[4], cardCode2[4], city[50], city2[50];
    int winnerAtribute, winnerAtribute2, winnerMatch;
    int places, places2, populationBattle, areaBattle, pibBattle, placesBattle, populationDensityBattle, pibPerCapitaBattle, powerBattle,
        atribute, atribute2;
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

    printf("\n");
    printf("Quais atributos você deseja comparar?");
    printf("Obs: Você pode escolher dois atributos");
    printf("\n");

    printf("Digite o número do atributo desejado: ");
    scanf("%d", &atribute);

    printf("Atributos disponíveis para comparação: \n");
    printf("\n");

    if (atribute != 1)
        printf("1. População \n");
    if (atribute != 2)
        printf("2. Área \n");
    if (atribute != 3)
        printf("3. Pib \n");
    if (atribute != 4)
        printf("4. Número de pontos turísticos \n");
    if (atribute != 5)
        printf("5. Densidade demográfica \n");
    if (atribute != 6)
        printf("6. Pib per capita \n");
    if (atribute != 7)
        printf("7. Poder total \n");

    printf("Digite o número do segundo atributo desejado: ");
    scanf("%d", &atribute2);

    if (atribute == atribute2)
    {
        printf("Você não pode escolher o mesmo atributo mais de uma vez.");
        return 0;
    }

    printf("Cidade da carta 1: %s\n", city);
    printf("Cidade da carta 2: %s\n", city2);

    switch (atribute)
    {
    case 1:
        printf("\nPopulação total da carta 1 (%s): %lu\n", city, population);
        printf("População total da carta 2 (%s): %lu\n", city2, population2);
        

        // Calcula o vencedor do duelo da carta 1
        winnerAtribute = population > population2 ? 1 : 0;

        break;

    case 2:
        printf("\nÁrea total da carta 1 (%s): %f\n", city, area);
        printf("Área total da carta 2 (%s): %f\n", city2, area2);
        

        // Calcula o vencedor do duelo da carta 1
        winnerAtribute = area > area2 ? 1 : 0;

        break;

    case 3:

        printf("\nPib total da carta 1 (%s): %lu\n", city, pib);
        printf("Pib total da carta 2 (%s): %lu\n", city2, pib2);
        

        // Calcula o vencedor do duelo da carta 1
        winnerAtribute = pib > pib2 ? 1 : 0;

        break;

    case 4:

        printf("\nTotal de pontos turísticos da carta 1 (%s): %d\n", city, places);
        printf("Total de pontos turísticos da carta 2 (%s): %d\n", city2, places2);

        // Calcula o vencedor do duelo da carta 1
        winnerAtribute = places > places2 ? 1 : 0;

        break;

    case 5:

        printf("\nDensidade populacional da carta 1 (%s): %f\n", city, populationDensity);
        printf("Densidade populacional da carta 2 (%s): %f\n", city2, populationDensity2);
        

        // Calcula o vencedor do duelo da carta 1
        winnerAtribute = populationDensity > populationDensity2 ? 1 : 0;

        break;

    case 6:

        printf("\nPib per capita total da carta 1 (%s): %f\n", city, pibPerCapita);
        printf("Pib per capita total da carta 2 (%s): %f\n", city2, pibPerCapita2);       

        // Calcula o vencedor do duelo da carta 1
        winnerAtribute = pibPerCapita > pibPerCapita2 ? 1 : 0;

        break;

    case 7:

        printf("\nPoder total da carta 1 (%s): %f\n", city, superPower);
        printf("Poder total da carta 2 (%s): %f\n", city2, superPower2);

        // Calcula o vencedor do duelo da carta 1
        winnerAtribute = superPower > superPower2 ? 1 : 0;

        break;

    default:
        printf("Opção inválida!");
        break;
    }

    switch (atribute2)
    {
    case 1:
        printf("\nPopulação total da carta 1 (%s): %lu\n", city, population);
        printf("População total da carta 2 (%s): %lu\n", city2, population2);
        printf("\n");

        // Calcula o vencedor do duelo da carta 2
        winnerAtribute2 = population2 > population ? 1 : 0;

        break;

    case 2:
        printf("\nÁrea total da carta 1 (%s): %f\n", city, area);
        printf("Área total da carta 2 (%s): %f\n", city2, area2);
        printf("\n");

        // Calcula o vencedor do duelo da carta 2
        winnerAtribute2 = area2 > area ? 1 : 0;

        break;

    case 3:

        printf("\nPib total da carta 1 (%s): %f\n", city, pib);
        printf("Pib total da carta 2 (%s): %f\n", city2, pib2);
        printf("\n");

        // Calcula o vencedor do duelo da carta 2
        winnerAtribute2 = pib2 > pib ? 1 : 0;

        break;

    case 4:

        printf("\nTotal de pontos turísticos da carta 1 (%s): %d\n", city, places);
        printf("Total de pontos turísticos da carta 2 (%s): %d\n", city2, places2);
        printf("\n");

        // Calcula o vencedor do duelo da carta 2
        winnerAtribute2 = places2 > places ? 1 : 0;

        break;

    case 5:

        printf("\nDensidade populacional da carta 1 (%s): %f\n", city, populationDensity);
        printf("Densidade populacional da carta 2 (%s): %f\n", city2, populationDensity2);
        printf("\n");
    
        // Calcula o vencedor do duelo da carta 2
        winnerAtribute2 = populationDensity2 > populationDensity ? 1 : 0;

        break;

    case 6:

        printf("\nPib per capita total da carta 1 (%s): %f\n", city, pibPerCapita);
        printf("Pib per capita total da carta 2 (%s): %f\n", city2, pibPerCapita2);
        printf("\n");
        
        // Calcula o vencedor do duelo da carta 2
        winnerAtribute2 = pibPerCapita2 > pibPerCapita ? 1 : 0;

        break;

    case 7:

        printf("\nPoder total da carta 1 (%s): %f\n", city, superPower);
        printf("Poder total da carta 2 (%s): %f\n", city2, superPower2);
        printf("\n");

        // Calcula o vencedor do duelo da carta 2
        winnerAtribute2 = superPower2 > superPower ? 1 : 0;

        break;

    default:
        printf("Opção inválida!");
        break;
    }

    winnerAtribute == 1 ? printf("Vencedor no primeiro atributo: Carta 1 \n") : printf("Vencedor no primeiro atributo: Carta 2 \n");

    winnerAtribute2 == 1 ? printf("Vencedor no segundo atributo: Carta 2 \n") : printf("Vencedor no segundo atributo: Carta 1 \n");

    if (winnerAtribute == winnerAtribute2)
    {
        printf("Vencedor do duelo: Tivemos um empate entre as comparações, cada carta ganhou 1 duelo de atributos.");
    }
    else if (winnerAtribute > winnerAtribute2)
    {
        printf("Vencedor do duelo: Carta 1");
    }
    else
    {
        printf("Vencedor do duelo: Carta 2");
    }
    
    return 0;
}
