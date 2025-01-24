#include <stdio.h>

  int main() {
    
    //estado A
    unsigned int NPTA01, NPTA02, NPTA03, NPTA04; 
    unsigned int populacaoA01, populacaoA02, populacaoA03, populacaoA04;
    unsigned int areaA01, areaA02, areaA03, areaA04;
    unsigned int PIBA01, PIBA02, PIBA03, PIBA04;
    unsigned int DPA01, DPA02, DPA03, DPA04;
    int PIBpCA01, PIBpCA02, PIBpCA03, PIBpCA04;

    //estado B
    unsigned int NPTB01, NPTB02, NPTB03, NPTB04; 
    unsigned int populacaoB01, populacaoB02, populacaoB03, populacaoB04;
    unsigned int areaB01, areaB02, areaB03, areaB04;
    unsigned int PIBB01, PIBB02, PIBB03, PIBB04;
    unsigned int DPB01, DPB02, DPB03, DPB04;
    int PIBpCB01, PIBpCB02, PIBpCB03, PIBpCB04;

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

    // CARTA B01
    printf("Quantidade de população, carta B01?: \n");
    scanf("%d", &populacaoB01);

    printf("Quantidade de área, carta B01?: \n");
    scanf("%d", &areaB01);

    printf("Qual o PIB, carta B01?: \n");
    scanf("%d", &PIBB01);

    printf("Número de pontos turísticos, carta B01?: \n");
    scanf("%d", &NPTB01);

    DPB01 = populacaoB01 / areaB01;
    PIBpCB01 = PIBB01 / populacaoB01;

    //Carta B02
    printf("Quantidade de população, carta B02?: \n");
    scanf("%d", &populacaoB02);

    printf("Quantidade de área, carta B02?: \n");
    scanf("%d", &areaB02);

    printf("Qual o PIB, carta B02?: \n");
    scanf("%d", &PIBB02);

    printf("Número de pontos turísticos, carta B02?: \n");
    scanf("%d", &NPTB02);

    DPB02 = populacaoB02 / areaB02;
    PIBpCB02 = PIBB02 / populacaoB02;

    //Carta B03
    printf("Quantidade de população, carta B03?: \n");
    scanf("%d", &populacaoB03);

    printf("Quantidade de área, carta B03?: \n");
    scanf("%d", &areaB03);

    printf("Qual o PIB, carta B03?: \n");
    scanf("%d", &PIBB03);

    printf("Número de pontos turísticos, carta B03?: \n");
    scanf("%d", &NPTB03);

    DPB03 = populacaoB03 / areaB03;
    PIBpCB03 = PIBB03 / populacaoB03;

    //Carta B04
    printf("Quantidade de população, carta B04?: \n");
    scanf("%d", &populacaoB04);

    printf("Quantidade de área, carta B04?: \n");
    scanf("%d", &areaB04);

    printf("Qual o PIB, carta B04?: \n");
    scanf("%d", &PIBB04);

    printf("Número de pontos turísticos, carta B04?: \n");
    scanf("%d", &NPTB04);

    DPB04 = populacaoB04 / areaB04;
    PIBpCB04 = PIBB04 / populacaoB04;









    // Estado A
    printf("Carta A01:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoA01, areaA01, PIBA01, NPTA01, DPA01, PIBpCA01);
    printf("Carta A02:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoA02, areaA02, PIBA02, NPTA02, DPA02, PIBpCA02);
    printf("Carta A03:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoA03, areaA03, PIBA03, NPTA03, DPA03, PIBpCA03);
    printf("Carta A04:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoA04, areaA04, PIBA04, NPTA04, DPA04, PIBpCA04);

    //Estado B
    printf("Carta B01:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoB01, areaB01, PIBB01, NPTB01, DPB01, PIBpCB01);
    printf("Carta B02:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoB02, areaB02, PIBB02, NPTB02, DPB02, PIBpCB02);
    printf("Carta B03:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoB03, areaB03, PIBB03, NPTB03, DPB03, PIBpCB03);
    printf("Carta B04:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoB04, areaB04, PIBB04, NPTB04, DPB04, PIBpCB04);


    
    
    
    
    
    
    
    
    return 0;



  }