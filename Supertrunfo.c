#include <stdio.h>

  int main() {
    unsigned int NPTA01, NPTA02, NPTA03, NPTA04; 
    unsigned int populacaoA01, populacaoA02, populacaoA03, populacaoA04;
    unsigned int areaA01, areaA02, areaA03, areaA04;
    unsigned int PIBA01, PIBA02, PIBA03, PIBA04;
    unsigned int DPA01, DPA02, DPA03, DPA04;
    int PIBpCA01, PIBpCA02, PIBpCA03, PIBpCA04;


   //NPT = Numero de pontos Turisticos
   //DP = Densidade populacional
   //PIBpC = PIB per Capita

    // CARTA A01

    printf("Quantidade de população, carta A01?: \n");
    scanf("%d", &populacaoA01);

    printf("Quantidade de área, carta A01?: \n");
    scanf("%d", &areaA01);

    printf("Qual o PIB, carta A01?: \n");
    scanf("%d", &PIBA01);

    printf("Número de pontos turísticos, carta A01?: \n");
    scanf("%d", &NPTA01);

    DPA01 = populacaoA01 / areaA01;
    PIBpCA01 = PIBA01 / populacaoA01;


    //CARTA A02

    printf("Quantidade de população, carta A02?: \n");
    scanf("%d", &populacaoA02);

    printf("Quantidade de área, carta A02?: \n");
    scanf("%d", &areaA02);

    printf("Qual o PIB, carta A02?: \n");
    scanf("%d", &PIBA02);

    printf("Número de pontos turísticos, carta A02?: \n");
    scanf("%d", &NPTA02);

    DPA02 = populacaoA02 / areaA02;
    PIBpCA02 = PIBA02 / populacaoA02;


    //CARTA A03

    printf("Quantidade de população, carta A03?: \n");
    scanf("%d", &populacaoA03);

    printf("Quantidade de área, carta A03?: \n");
    scanf("%d", &areaA03);

    printf("Qual o PIB, carta A03?: \n");
    scanf("%d", &PIBA03);

    printf("Número de pontos turísticos, carta A03?: \n");
    scanf("%d", &NPTA03);

    DPA03 = populacaoA03 / areaA03;
    PIBpCA03 = PIBA03 / populacaoA03;

    //CARTA A04

    printf("Quantidade de população, carta A04?: \n");
    scanf("%d", &populacaoA04);

    printf("Quantidade de área, carta A04?: \n");
    scanf("%d", &areaA04);

    printf("Qual o PIB, carta A04?: \n");
    scanf("%d", &PIBA04);

    printf("Número de pontos turísticos, carta A04?: \n");
    scanf("%d", &NPTA04);

    DPA04 = populacaoA04 / areaA04;
    PIBpCA04 = PIBA04 / populacaoA04;









    // Estado A
    printf("Carta A01:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoA01, areaA01, PIBA01, NPTA01, DPA01, PIBpCA01);
    printf("Carta A02:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoA02, areaA02, PIBA02, NPTA02, DPA02, PIBpCA02);
    printf("Carta A03:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoA03, areaA03, PIBA03, NPTA03, DPA03, PIBpCA03);
    printf("Carta A04:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoA04, areaA04, PIBA04, NPTA04, DPA04, PIBpCA04);

    
    return 0;



  }