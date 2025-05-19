#include <stdio.h>

int main() {
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade1, densidade2;
    float pibporcapita1, pibporcapita2;

    printf("populacao1: \n");
    scanf("%d", &populacao1);

    printf("area1: \n");
    scanf("%f", &area1);

    printf("pib1: \n");
    scanf("%f", &pib1);

    printf("pontosTuristicos1: \n");
    scanf("%d", &pontosTuristicos1);

    printf("populacao2: \n");
    scanf("%d", &populacao2);

    printf("area2: \n");
    scanf("%f", &area2);

    printf("pib2: \n");
    scanf("%f", &pib2);

    printf("pontosTuristicos2: \n");
    scanf("%d", &pontosTuristicos2);

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibporcapita1 = pib1 / populacao1;
    pibporcapita2 = pib2 / populacao2;

    printf("Carta 1\n");
    printf("populacao: %d\n", populacao1);
    printf("area: %.2f km²\n", area1);
    printf("pib: %.2f bilhões\n", pib1);
    printf("pontos Turísticos: %d\n", pontosTuristicos1);
    printf("desnsidade populacional: %.2f hab/km²\n", densidade1);
    printf("pib por capita: %.2f\n", pibporcapita1);

    printf("\n--- Carta 2 ---\n");
    printf("populacao: %d\n", populacao2);
    printf("area: %.2f km²\n", area2);
    printf("pib: %.2f bilhões\n", pib2);
    printf("pontos Turísticos: %d\n", pontosTuristicos2);
    printf("densidade populacional: %.2f hab/km²\n", densidade2);
    printf("pib por capita: %.2f\n", pibporcapita2);

    return 0;
}