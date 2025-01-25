#include <stdio.h>

int main() {
    //estado A
    unsigned int NPTA01, NPTA02, NPTA03, NPTA04; 
    unsigned int populacaoA01, populacaoA02, populacaoA03, populacaoA04;
    unsigned int areaA01, areaA02, areaA03, areaA04;
    unsigned int PIBA01, PIBA02, PIBA03, PIBA04;
    unsigned int DPA01, DPA02, DPA03, DPA04;
    int PIBpCA01, PIBpCA02, PIBpCA03, PIBpCA04;
    int SPA01, SPA02, SPA03, SPA04;

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
    SPA02 = populacaoA02 + areaA02 + PIBA02 + NPTA02 + DPA02 + PIBpCA02;



    // Estado A
    printf("Carta A01 - Super Poder: %d\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n", SPA01, populacaoA01, areaA01, PIBA01, NPTA01, DPA01, PIBpCA01);
    printf("Carta A02 - Super Poder: %d\n - Populacao: %d\n - Area: %d Km²\n - PIB: R$ %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d habitante por Km²\n - PIB per Capita: R$ %d\n\n", SPA02, populacaoA02, areaA02, PIBA02, NPTA02, DPA02, PIBpCA02);

     int PC01sp, PC01pp, PC01ar, PC01pib, PC01npt, PC01dp, PC01pibc;
     int PC02sp, PC02pp, PC02ar, PC02pib, PC02npt, PC02dp, PC02pibc;
     char primeriracarta[3];
     char segundacarta[3];



    printf("Compare suas cartas!\n");

    //Primeira carta
    printf("Qual sua carta?\n");
    scanf("%s", &primeriracarta);
    printf("Digite as habilidades de sua carta na ordem exibida acima!\n");
    scanf("%d %d %d %d %d %d %d", &PC01sp, &PC01pp, &PC01ar, &PC01pib, &PC01npt, &PC01dp, &PC01pibc);

    //Segunda carta
    printf("Digite a segunda carta!\n");
    scanf("%s", &segundacarta);
    printf("Digite as habilidades de sua carta na ordem exibida acima!\n");
    scanf("%d %d %d %d %d %d %d", &PC02sp, &PC02pp, &PC02ar, &PC02pib, &PC02npt, &PC02dp, &PC02pibc);



    printf("Aquele que possuir o maior quantida de numeros 1, venceu!\n");
    printf("Resultado da Primeira carta:\n Super Poder: %d\n - Populacao: %d\n - Area: %d\n - PIB: %d\n - Numero de pontos turisticos: %d\n - Densidade Populacional: %d\n - PIB per Capita: %d\n\n", PC01sp > PC02sp, PC01pp > PC02pp, PC01ar > PC02ar, PC01pib > PC02pib, PC01npt > PC02npt, PC01dp < PC02dp, PC01pibc > PC02pibc);


    

    

    return 0;
}