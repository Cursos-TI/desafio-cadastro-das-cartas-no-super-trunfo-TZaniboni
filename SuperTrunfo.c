#include <stdio.h>

  int main() {

   //NPT = Numero de pontos Turisticos
   //DP = Densidade populacional
   //PIBpC = PIB per Capita
   //SP = Super poder 
    
    //estado A
    unsigned int NPTA01, NPTA02, NPTA03, NPTA04; 
    unsigned int populacaoA01, populacaoA02, populacaoA03, populacaoA04;
    unsigned int areaA01, areaA02, areaA03, areaA04;
    unsigned int PIBA01, PIBA02, PIBA03, PIBA04;
    unsigned int DPA01, DPA02, DPA03, DPA04;
    int PIBpCA01, PIBpCA02, PIBpCA03, PIBpCA04;
    int SPA01, SPA02, SPA03, SPA04;

    //estado B
    unsigned int NPTB01, NPTB02, NPTB03, NPTB04; 
    unsigned int populacaoB01, populacaoB02, populacaoB03, populacaoB04;
    unsigned int areaB01, areaB02, areaB03, areaB04;
    unsigned int PIBB01, PIBB02, PIBB03, PIBB04;
    unsigned int DPB01, DPB02, DPB03, DPB04;
    int PIBpCB01, PIBpCB02, PIBpCB03, PIBpCB04;
    int SP0B1, SPB02, SPB03, SPB04;

    //Estado C
    unsigned int NPTC01, NPTC02, NPTC03, NPTC04; 
    unsigned int populacaoC01, populacaoC02, populacaoC03, populacaoC04;
    unsigned int areaC01, areaC02, areaC03, areaC04;
    unsigned int PIBC01, PIBC02, PIBC03, PIBC04;
    unsigned int DPC01, DPC02, DPC03, DPC04;
    int PIBpCC01, PIBpCC02, PIBpCC03, PIBpCC04;
    int SPC01, SPC02, SPC03, SPC04;

    //Estado D
    unsigned int NPTD01, NPTD02, NPTD03, NPTD04; 
    unsigned int populacaoD01, populacaoD02, populacaoD03, populacaoD04;
    unsigned int areaD01, areaD02, areaD03, areaD04;
    unsigned int PIBD01, PIBD02, PIBD03, PIBD04;
    unsigned int DPD01, DPD02, DPD03, DPD04;
    int PIBpCD01, PIBpCD02, PIBpCD03, PIBpCD04;
    int SPD01, SPD02, SPD03, SPD04;

    //Estado E
    unsigned int NPTE01, NPTE02, NPTE03, NPTE04; 
    unsigned int populacaoE01, populacaoE02, populacaoE03, populacaoE04;
    unsigned int areaE01, areaE02, areaE03, areaE04;
    unsigned int PIBE01, PIBE02, PIBE03, PIBE04;
    unsigned int DPE01, DPE02, DPE03, DPE04;
    int PIBpCE01, PIBpCE02, PIBpCE03, PIBpCE04;
    int SPE01, SPE02, SPE03, SPE04;

    //Estado F
    unsigned int NPTF01, NPTF02, NPTF03, NPTF04; 
    unsigned int populacaoF01, populacaoF02, populacaoF03, populacaoF04;
    unsigned int areaF01, areaF02, areaF03, areaF04;
    unsigned int PIBF01, PIBF02, PIBF03, PIBF04;
    unsigned int DPF01, DPF02, DPF03, DPF04;
    int PIBpCF01, PIBpCF02, PIBpCF03, PIBpCF04;
    int SPF01, SPF02, SPF03, SPF04;

    //Estado G
    unsigned int NPTG01, NPTG02, NPTG03, NPTG04; 
    unsigned int populacaoG01, populacaoG02, populacaoG03, populacaoG04;
    unsigned int areaG01, areaG02, areaG03, areaG04;
    unsigned int PIBG01, PIBG02, PIBG03, PIBG04;
    unsigned int DPG01, DPG02, DPG03, DPG04;
    int PIBpCG01, PIBpCG02, PIBpCG03, PIBpCG04;
    int SPG01, SPG02, SPG03, SPG04;

    //Estado H
    unsigned int NPTH01, NPTH02, NPTH03, NPTH04; 
    unsigned int populacaoH01, populacaoH02, populacaoH03, populacaoH04;
    unsigned int areaH01, areaH02, areaH03, areaH04;
    unsigned int PIBH01, PIBH02, PIBH03, PIBH04;
    unsigned int DPH01, DPH02, DPH03, DPH04;
    int PIBpCH01, PIBpCH02, PIBpCH03, PIBpCH04;
    int SPH01, SPH02, SPH03, SPH04;

     
    // CARTA A01 a 04
    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta A01?: \n");
    scanf("%d %d %d %d", &populacaoA01, &areaA01, &PIBA01, &NPTA01);
    DPA01 = populacaoA01 / areaA01;
    PIBpCA01 = PIBA01 / populacaoA01;
    SPA01 = populacaoA01 + areaA01 + PIBA01 + NPTA01 + DPA01 + PIBpCA01;
    
    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta A02?: \n");
    scanf("%d %d %d %d", &populacaoA02, &areaA02, &PIBA02, &NPTA02);
    DPA02 = populacaoA02 / areaA02;
    PIBpCA02 = PIBA02 / populacaoA02;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta A03?: \n");
    scanf("%d %d %d %d", &populacaoA03, &areaA03, &PIBA03, &NPTA03);
    DPA03 = populacaoA03 / areaA03;
    PIBpCA03 = PIBA03 / populacaoA03;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta A04?: \n");
    scanf("%d %d %d %d", &populacaoA04, &areaA04, &PIBA04, &NPTA04);
    DPA04 = populacaoA04 / areaA04;
    PIBpCA04 = PIBA04 / populacaoA04;

    // CARTA B01 a B04
    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta B01?: \n");
    scanf("%d %d %d %d", &populacaoB01, &areaB01, &PIBB01, &NPTB01);
    DPB01 = populacaoB01 / areaB01;
    PIBpCB01 = PIBB01 / populacaoB01;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta B02?: \n");
    scanf("%d %d %d %d", &populacaoB02, &areaB02, &PIBB02, &NPTB02);
    DPB02 = populacaoB02 / areaB02;
    PIBpCB02 = PIBB02 / populacaoB02;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta B03?: \n");
    scanf("%d %d %d %d", &populacaoB03, &areaB03, &PIBB03, &NPTB03);
    DPB03 = populacaoB03 / areaB03;
    PIBpCB03 = PIBB03 / populacaoB03;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta B04?: \n");
    scanf("%d%d %d %d", &populacaoB04, &areaB04, &PIBB04, &NPTB04);
    DPB04 = populacaoB04 / areaB04;
    PIBpCB04 = PIBB04 / populacaoB04;

    //Carta C01 a C04
    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta C01?: \n");
    scanf("%d %d %d %d", &populacaoC01, &areaC01, &PIBC01, &NPTC01);
    DPC01 = populacaoC01 / areaC01;
    PIBpCC01 = PIBC01 / populacaoC01;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta C02?: \n");
    scanf("%d %d %d %d", &populacaoC02, &areaC02, &PIBC02, &NPTC02);
    DPC02 = populacaoC02 / areaC02;
    PIBpCC02 = PIBC02 / populacaoC02;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta C03?: \n");
    scanf("%d %d %d %d", &populacaoC03, &areaC03, &PIBC03, &NPTC03);
    DPC03 = populacaoC03 / areaC03;
    PIBpCC03 = PIBC03 / populacaoC03;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta C04?: \n");
    scanf("%d %d %d %d", &populacaoC04, &areaC04, &PIBC04, &NPTC04);
    DPC04 = populacaoC04 / areaC04;
    PIBpCC04 = PIBC04 / populacaoC04;

    //Carta D01 a D04
    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta D01?: \n");
    scanf("%d %d %d %d", &populacaoD01, &areaD01, &PIBD01, &NPTD01);
    DPD01 = populacaoD01 / areaD01;
    PIBpCD01 = PIBD01 / populacaoD01;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta D02?: \n");
    scanf("%d %d %d %d", &populacaoD02, &areaD02, &PIBD02, &NPTD02);
    DPD02 = populacaoD02 / areaD02;
    PIBpCD02 = PIBD02 / populacaoD02;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta D03?: \n");
    scanf("%d %d %d %d", &populacaoD03, &areaD03, &PIBD03, &NPTD03);
    DPD03 = populacaoD03 / areaD03;
    PIBpCD03 = PIBD03 / populacaoD03;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta D04?: \n");
    scanf("%d %d %d %d", &populacaoD04, &areaD04, &PIBD04, &NPTD04);
    DPD04 = populacaoD04 / areaD04;
    PIBpCD04 = PIBD04 / populacaoD04;

    //Carta E01 a E04
    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta E01?: \n");
    scanf("%d %d %d %d", &populacaoE01, &areaE01, &PIBE01, &NPTE01);
    DPE01 = populacaoE01 / areaE01;
    PIBpCE01 = PIBE01 / populacaoE01;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta E02?: \n");
    scanf("%d %d %d %d", &populacaoE02, &areaE02, &PIBE02, &NPTE02);
    DPE02 = populacaoE02 / areaE02;
    PIBpCE02 = PIBE02 / populacaoE02;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta E03?: \n");
    scanf("%d %d %d %d", &populacaoE03, &areaE03, &PIBE03, &NPTE03);
    DPE03 = populacaoE03 / areaE03;
    PIBpCE03 = PIBE03 / populacaoE03;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta E04?: \n");
    scanf("%d %d %d %d", &populacaoE04, &areaE04, &PIBE04, &NPTE04);
    DPE04 = populacaoE04 / areaE04;
    PIBpCE04 = PIBE04 / populacaoE04;

    //Carta F01 a F04
    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta F01?: \n");
    scanf("%d %d %d %d", &populacaoF01, &areaF01, &PIBF01, &NPTF01);
    DPF01 = populacaoF01 / areaF01;
    PIBpCF01 = PIBF01 / populacaoF01;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta F02?: \n");
    scanf("%d %d %d %d", &populacaoF02, &areaF02, &PIBF02, &NPTF02);
    DPF02 = populacaoF02 / areaF02;
    PIBpCF02 = PIBF02 / populacaoF02;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta F03?: \n");
    scanf("%d %d %d %d", &populacaoF03, &areaF03, &PIBF03, &NPTF03);
    DPF03 = populacaoF03 / areaF03;
    PIBpCF03 = PIBF03 / populacaoF03;
    
    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta F04?: \n");
    scanf("%d %d %d %d", &populacaoF04, &areaF04, &PIBF04, &NPTF04);
    DPF04 = populacaoF04 / areaF04;
    PIBpCF04 = PIBF04 / populacaoF04;;

    //Carta G01 a G04
    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta G01?: \n");
    scanf("%d %d %d %d", &populacaoG01, &areaG01, &PIBG01, &NPTG01);
    DPG01 = populacaoG01 / areaG01;
    PIBpCG01 = PIBG01 / populacaoG01;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta G02?: \n");
    scanf("%d %d %d %d", &populacaoG02, &areaG02, &PIBG02, &NPTG02);
    DPG02 = populacaoG02 / areaG02;
    PIBpCG02 = PIBG02 / populacaoG02;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta G03?: \n");
    scanf("%d %d %d %d", &populacaoG03, &areaG03, &PIBG03, &NPTG03);
    DPG03 = populacaoG03 / areaG03;
    PIBpCG03 = PIBG03 / populacaoG03;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta G04?: \n");
    scanf("%d %d %d %d", &populacaoG04, &areaG04, &PIBG04, &NPTG04);
    DPG04 = populacaoG04 / areaG04;
    PIBpCG04 = PIBG04 / populacaoG04;

    //Carta H01 a H04
    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta H01?: \n");
    scanf("%d %d %d %d", &populacaoH01, &areaH01, &PIBH01, &NPTH01);
    DPH01 = populacaoH01 / areaH01;
    PIBpCH01 = PIBH01 / populacaoH01;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta H02?: \n");
    scanf("%d %d %d %d", &populacaoH02, &areaH02, &PIBH02, &NPTH02);
    DPH02 = populacaoH02 / areaH02;
    PIBpCH02 = PIBH02 / populacaoH02;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta H03?: \n");
    scanf("%d %d %d %d", &populacaoH03, &areaH03, &PIBH03, &NPTH03);
    DPH03 = populacaoH03 / areaH03;
    PIBpCH03 = PIBH03 / populacaoH03;

    printf("Quantidade de população, área, PIB e o número de pontos turísticos da carta H04?: \n");
    scanf("%d %d %d %d", &populacaoH04, &areaH04, &PIBH04, &NPTH04);
    DPH04 = populacaoH04 / areaH04;
    PIBpCH04 = PIBH04 / populacaoH04;










    // Estado A
    printf("Carta A01 - Super Poder: %d\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n", SPA01, populacaoA01, areaA01, PIBA01, NPTA01, DPA01, PIBpCA01);
    printf("Carta A02:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoA02, areaA02, PIBA02, NPTA02, DPA02, PIBpCA02);
    printf("Carta A03:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoA03, areaA03, PIBA03, NPTA03, DPA03, PIBpCA03);
    printf("Carta A04:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoA04, areaA04, PIBA04, NPTA04, DPA04, PIBpCA04);

    //Estado B
    printf("Carta B01:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoB01, areaB01, PIBB01, NPTB01, DPB01, PIBpCB01);
    printf("Carta B02:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoB02, areaB02, PIBB02, NPTB02, DPB02, PIBpCB02);
    printf("Carta B03:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoB03, areaB03, PIBB03, NPTB03, DPB03, PIBpCB03);
    printf("Carta B04:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoB04, areaB04, PIBB04, NPTB04, DPB04, PIBpCB04);

    //Estado C
    printf("Carta C01:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoC01, areaC01, PIBC01, NPTC01, DPC01, PIBpCC01);
    printf("Carta C02:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoC02, areaC02, PIBC02, NPTC02, DPC02, PIBpCC02);
    printf("Carta C03:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoC03, areaC03, PIBC03, NPTC03, DPC03, PIBpCC03);
    printf("Carta C04:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoC04, areaC04, PIBC04, NPTC04, DPC04, PIBpCC04);

    //Estado D
    printf("Carta D01:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoD01, areaD01, PIBD01, NPTD01, DPD01, PIBpCD01);
    printf("Carta D02:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoD02, areaD02, PIBD02, NPTD02, DPD02, PIBpCD02);
    printf("Carta D03:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoD03, areaD03, PIBD03, NPTD03, DPD03, PIBpCD03);
    printf("Carta D04:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoD04, areaD04, PIBD04, NPTD04, DPD04, PIBpCD04);

    //Estado E
    printf("Carta E01:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoE01, areaE01, PIBE01, NPTE01, DPE01, PIBpCE01);
    printf("Carta E02:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoE02, areaE02, PIBE02, NPTE02, DPE02, PIBpCE02);
    printf("Carta E03:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoE03, areaE03, PIBE03, NPTE03, DPE03, PIBpCE03);
    printf("Carta E04:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoE04, areaE04, PIBE04, NPTE04, DPE04, PIBpCE04);

    //Estado F
    printf("Carta F01:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoE01, areaE01, PIBE01, NPTE01, DPE01, PIBpCE01);
    printf("Carta F02:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoE02, areaE02, PIBE02, NPTE02, DPE02, PIBpCE02);
    printf("Carta F03:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoE03, areaE03, PIBE03, NPTE03, DPE03, PIBpCE03);
    printf("Carta F04:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoE04, areaE04, PIBE04, NPTE04, DPE04, PIBpCE04);

    //Estado G
    printf("Carta G01:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoG01, areaG01, PIBG01, NPTG01, DPG01, PIBpCG01);
    printf("Carta G02:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoG02, areaG02, PIBG02, NPTG02, DPG02, PIBpCG02);
    printf("Carta G03:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoG03, areaG03, PIBG03, NPTG03, DPG03, PIBpCG03);
    printf("Carta G04:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoG04, areaG04, PIBG04, NPTG04, DPG04, PIBpCG04);

    //Estado H
    printf("Carta H01:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoH01, areaH01, PIBH01, NPTH01, DPH01, PIBpCH01);
    printf("Carta H02:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoH02, areaH02, PIBH02, NPTH02, DPH02, PIBpCH02);
    printf("Carta H03:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoH03, areaH03, PIBH03, NPTH03, DPH03, PIBpCH03);
    printf("Carta H04:\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n",  populacaoH04, areaH04, PIBH04, NPTH04, DPH04, PIBpCH04);


    int PC01sp, PC01pp, PC01ar, PC01pib, PC01npt, PC01dp, PC01pibc;
    int PC02sp, PC02pp, PC02ar, PC02pib, PC02npt, PC02dp, PC02pibc;
    char primeriracarta[4];
    char segundacarta[4];



    printf("Compare suas cartas!\n");

    //Primeira carta
    printf("Digite a primeira carta! Ex. (A01,A02..H04)\n");
    scanf("%s", &primeriracarta);
    printf("Digite as habilidades de sua carta na ordem exibida acima!\n");
    scanf("%d %d %d %d %d %d %d", &PC01sp, &PC01pp, &PC01ar, &PC01pib, &PC01npt, &PC01dp, &PC01pibc);

    //Segunda carta
    printf("Digite a segunda carta! Ex. (A01,A02..H04)\n");
    scanf("%s", &segundacarta);
    printf("Digite as habilidades de sua carta na ordem exibida acima!\n");
    scanf("%d %d %d %d %d %d %d", &PC02sp, &PC02pp, &PC02ar, &PC02pib, &PC02npt, &PC02dp, &PC02pibc);


    //Resultado
    printf("Aquele que possuir o maior quantida de numeros 1, venceu!\n\n");

    printf("Resultado da carta: %s\n Super Poder: %d\n - Populacao: %d\n - Area: %d\n - PIB: %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d\n - PIB per Capita: %d\n\n", primeriracarta, PC01sp > PC02sp, PC01pp > PC02pp, PC01ar > PC02ar, PC01pib > PC02pib, PC01npt > PC02npt, PC01dp < PC02dp, PC01pibc > PC02pibc);
    printf("Resultado da carta: %s\n Super Poder: %d\n - Populacao: %d\n - Area: %d\n - PIB: %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d\n - PIB per Capita: %d\n\n", segundacarta, PC02sp > PC01sp, PC02pp > PC01pp, PC02ar > PC01ar, PC02pib > PC01pib, PC02npt > PC01npt, PC02dp < PC01dp, PC02pibc > PC01pibc);

    
    
    
    
    
    
    
    
    return 0;



  }