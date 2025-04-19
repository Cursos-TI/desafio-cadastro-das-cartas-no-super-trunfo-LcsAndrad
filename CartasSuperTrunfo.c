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

    printf("Carta Um\n");
    printf("Digite o Estado:\n");
    scanf("%2s", Estado);  // Limite de 2 caracteres
    printf("Digite o Código da Carta:\n");
    scanf("%9s", CodigoDaCarta);  // Limite de 9 caracteres
    printf("Digite o nome da cidade:\n");
    scanf("%9s", NomeDaCidade);  // Limite de 9 caracteres
    printf("Digite a População:\n");
    scanf("%d", &Populacao);
    printf("Digite a área em Km:\n");
    scanf("%f", &AreaEmKm);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &NumeroDePontosTuristicos);
    printf("--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", NomeDaCidade);
    printf("Código da carta: %s\n", CodigoDaCarta);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", AreaEmKm);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", NumeroDePontosTuristicos);

    /* Carta Dois */
    char Estado2[3];
    char CodigoDaCarta2[10];
    char NomeDaCidade2[10];
    int Populacao2;
    float AreaEmKm2;
    float PIB2;
    int NumeroDePontosTuristicos2;

    printf("Carta Dois\n");
    printf("Digite o Estado:\n");
    scanf("%2s", Estado2);  // Limite de 2 caracteres
    printf("Digite o Código da Carta:\n");
    scanf("%9s", CodigoDaCarta2);  // Limite de 9 caracteres
    printf("Digite o nome da cidade:\n");
    scanf("%9s", NomeDaCidade2);  // Limite de 9 caracteres
    printf("Digite a População:\n");
    scanf("%d", &Populacao2);
    printf("Digite a área em Km:\n");
    scanf("%f", &AreaEmKm2);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &NumeroDePontosTuristicos2);
    printf("--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", NomeDaCidade2);
    printf("Código da carta: %s\n", CodigoDaCarta2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", AreaEmKm2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", NumeroDePontosTuristicos2);

    return 0;
}