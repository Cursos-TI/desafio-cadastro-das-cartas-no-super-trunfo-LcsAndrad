#include <stdio.h>

int main() {
    /* Carta Um */
    char Estado[3];
    char CodigoDaCarta[10];
    char NomeDaCidade[10];
    int Populacao;
    float AreaEmKm;
    float PIB;
    int NumeroDePontosTuristicos;
    float DensidadePopulacional;
    float PIBpercapita;

    printf("Carta Um\n");
    printf("Digite o Estado:\n");
    scanf("%2s", Estado);  
    printf("Digite o Código da Carta:\n");
    scanf("%9s", CodigoDaCarta);  
    printf("Digite o nome da cidade:\n");
    scanf("%9s", NomeDaCidade);  
    printf("Digite a População:\n");
    scanf("%d", &Populacao);
    printf("Digite a área em Km:\n");
    scanf("%f", &AreaEmKm);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &NumeroDePontosTuristicos);
    DensidadePopulacional = Populacao / AreaEmKm;
    PIBpercapita = PIB / Populacao;


    printf("--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", NomeDaCidade);
    printf("Código da carta: %s\n", CodigoDaCarta);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", AreaEmKm);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", NumeroDePontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional);
    printf("PIB per capita: %.2f\n", PIBpercapita);

    /* Carta Dois */
    char Estado2[3];
    char CodigoDaCarta2[10];
    char NomeDaCidade2[10];
    int Populacao2;
    float AreaEmKm2;
    float PIB2;
    int NumeroDePontosTuristicos2;
    float DensidadePopulacional2;
    float PIBpercapita2;

    printf("Carta Dois\n");
    printf("Digite o Estado:\n");
    scanf("%2s", Estado2);
    printf("Digite o Código da Carta:\n");
    scanf("%9s", CodigoDaCarta2);
    printf("Digite o nome da cidade:\n");
    scanf("%9s", NomeDaCidade2);  
    printf("Digite a População:\n");
    scanf("%d", &Populacao2);
    printf("Digite a área em Km:\n");
    scanf("%f", &AreaEmKm2);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &NumeroDePontosTuristicos2);
    DensidadePopulacional2 = Populacao2 / AreaEmKm2;
    PIBpercapita2 = PIB2 / Populacao2;


    printf("--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", NomeDaCidade2);
    printf("Código da carta: %s\n", CodigoDaCarta2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", AreaEmKm2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", NumeroDePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per capita: %.2f\n", PIBpercapita2);

    return 0;
}