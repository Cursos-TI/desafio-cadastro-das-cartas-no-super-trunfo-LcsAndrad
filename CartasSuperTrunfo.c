#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    /* Carta Um */
    char Estado[3];
    char CodigoDaCarta[10];
    char NomeDaCidade[10];
    int Populacao;
    float AreaEmKm;
    float PIB;
    int NumeroDePontosTuristicos;

    printf("=== Preencha os dados da CARTA 1 ===\n");

    printf("Digite o Estado:\n");
    scanf("%s", Estado);

    printf("Digite o Código da Carta:\n");
    scanf("%s", CodigoDaCarta);

    printf("Digite o nome da cidade:\n");
    scanf("%s", NomeDaCidade);

    printf("Digite a População:\n");
    scanf("%d", &Populacao);

    printf("Digite a área em Km:\n");
    scanf("%f", &AreaEmKm);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &NumeroDePontosTuristicos);

    printf("\n--- Carta 1 ---\n");
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

    printf("\n=== Preencha os dados da CARTA 2 ===\n");

    printf("Digite o Estado:\n");
    scanf("%s", Estado2);

    printf("Digite o Código da Carta:\n");
    scanf("%s", CodigoDaCarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", NomeDaCidade2);

    printf("Digite a População:\n");
    scanf("%d", &Populacao2);

    printf("Digite a área em Km:\n");
    scanf("%f", &AreaEmKm2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &NumeroDePontosTuristicos2);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", NomeDaCidade2);
    printf("Código da carta: %s\n", CodigoDaCarta2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", AreaEmKm2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", NumeroDePontosTuristicos2);

    return 0;
}
