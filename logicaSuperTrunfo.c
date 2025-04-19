#include <stdio.h>

int main(){

    //declaração de variaveis
    int populacao1, populacao2 ,pt_tur1, pt_tur2;    
    char est1['a'], est2['b'];     
    char cd_carta1[3], cidade1[20];        
    char cd_carta2[3], cidade2[20];
    float area1, area2, pib1, pib2, densiP1, densiP2, pibCap1, pibCap2, SuperPoder1, SuperPoder2;
    float resultadoPOP, resultadoAR, resultadoPIB, resultadoPT, resultadoDP, resultadoPIBCAP, resultadoSP;



//entrada de dados da primeira carta
    printf("Carta 1:\n");

    printf("digite o estado1('A' a 'H'): ");
    scanf("%s", &est1);

    printf("digite o codico da carta de 01 a 04: ");
    scanf("%s", &cd_carta1);

    printf("digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("digite o numero da populacao: ");
    scanf("%d", &populacao1);

    printf("digite a area: ");
    scanf("%f", &area1);

    printf("digite o pib: ");
    scanf("%f", &pib1);

    printf("digite a quantidade de pontos turisticos: ");
    scanf("%d", &pt_tur1);

//entrada de dados da segunda carta
    printf("\nCarta 2:\n");

    printf("digite o estado2('B' a 'H'): ");
    scanf("%s", &est2);    

    printf("digite o codico da carta de 02 a 04: ");
    scanf("%s", &cd_carta2);

    printf("digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("digite o numero da populacao: ");
    scanf("%d", &populacao2);

    printf("digite a area: ");
    scanf("%f", &area2);

    printf("digite o pib: ");
    scanf("%f", &pib2);

    printf("digite a quantidade de pontos turisticos: ");
    scanf("%d", &pt_tur2);

//calculo densidade e renda perCapita carta 1
    densiP1 = (float) (populacao1 / area1);

    pibCap1 = (float) (pib1 / populacao1);

//calculo densidade e renda perCapita carta 2 
    densiP2 = (float) (populacao2 / area2);

    pibCap2 = (float) (pib2 / populacao2);

//saida de dados da primeira carta
    printf("\nCarta 1:");
    printf("\nestado: %s", est1);        
    printf("\nCódigo: %s%s", est1, cd_carta1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nNúmero de Pontos Turísticos: %d", pt_tur1);         
    printf("\nDensidade Populacional: %.2f hab/km²", densiP1);
    printf("\nPIB per Capita: %.2f reais\n", pibCap1);

//saida de dados da segunda carta
    printf("\nCarta 2:");
    printf("\nestado: %s", est2);        
    printf("\nCódigo: %s%s", est2, cd_carta2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pt_tur2);
    printf("\nDensidade Populacional: %.2f hab/km²", densiP2);
    printf("\nPIB per Capita: %.2f reais\n", pibCap2);


        
//valor Super Poder
    SuperPoder1 = populacao1 + area1 + pib1 + pt_tur1 + pibCap1 + (1/densiP1);

    SuperPoder2 = populacao2 + area2 + pib2 + pt_tur2 + pibCap2 + (1/densiP2);



//resultados das batalhas
    printf("\nComparação de cartas: \n");

    resultadoPOP = populacao1 > populacao2;
    printf("População: (%.0f)\n", resultadoPOP);

    resultadoAR = area1 > area2;
    printf("Area: (%.0f)\n", resultadoAR);

    resultadoPIB = pib1 > pib2;
    printf("PIB: (%.0f)\n", resultadoPIB);

    resultadoPT = pt_tur1 > pt_tur2;
    printf("Pontos Turisticos: (%.0f)\n", resultadoPT);

    resultadoDP = densiP1 < densiP2;
    printf("Densidade Populacional: (%.0f)\n", resultadoDP);

    resultadoPIBCAP = pibCap1 > pibCap2;
    printf("PIB per Capita: (%.0f)\n", resultadoPIBCAP);

    resultadoSP = SuperPoder1 > SuperPoder2;
    printf("Super Poder: (%.0f)\n\n", resultadoSP);


//RESULTADO DAS BATALHAS POR ATRIBUTOS COM IF/ELSE
    if (populacao1 > populacao2)
    {
        printf("Comparação de cartas (Atributo: População): \n");
        printf("Carta 1 - (%s): %d \n", cidade1, populacao1);
        printf("Carta 2 - (%s): %d \n", cidade2, populacao2);
        printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
    }else{
        printf("Comparação de cartas (Atributo: População): \n");
        printf("Carta 1 - (%s): %d \n", cidade1, populacao1);
        printf("Carta 2 - (%s): %d \n", cidade2, populacao2);
        printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
    }

    if (pt_tur1 > pt_tur2)
    {
        printf("Comparação de cartas (Atributo: Pontos Turisticos): \n");
        printf("Carta 1 - (%s): %d \n", cidade1, pt_tur1);
        printf("Carta 2 - (%s): %d \n", cidade2, pt_tur2);
        printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
    }else{
        printf("Comparação de cartas (Atributo: Pontos Turisticos): \n");
        printf("Carta 1 - (%s): %d \n", cidade1, pt_tur1);
        printf("Carta 2 - (%s): %d \n", cidade2, pt_tur2);
        printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
    }
            

    return 0;
}