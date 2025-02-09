#include <stdio.h>

int main() {
    
    char cidade[50];
    int pontos;
    int area;
    int populacao;
    float pib;
    float pibpercapto;
    float densidade;

     

    printf("Nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Informe o tamanho da população: \n");
    scanf(" %d", &populacao);

    printf("Informe a quantidade de pontos turisticos: \n");
    scanf(" %d", &pontos);

    printf("Informe a area total da cidade em metros quadrados: \n");
    scanf("%d", &area);

    printf("Informe o valor do PIB em reais: \n");
    scanf("%f", &pib);

    pibpercapto = (float) pib / populacao;
    densidade = (float) populacao / area;

    printf("Cidade:%s\n", cidade);
    printf("população:%d pessoas\n", populacao);
    printf("Pontos turísticos:%d\n", pontos);
    printf("Area de:%d metros quadrados\n", area);
    printf("PIB:%.1f reais\n", pib);
    printf("PIB percapto:%.2f reais por pessoa\n", pibpercapto);
    printf("Densidade demográfica:%.2f pessoas por metro quadrado\n", densidade);

    return 0;
}
