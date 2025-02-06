#include <stdio.h>

int main() {
    
    char cidade[50];
    int pontos;
    float area;
    float populacao;
    float pib;
    

    printf("Nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Informe o tamanho da população: \n");
    scanf(" %f", &populacao);

    printf("Informe a quantidade de pontos turisticos: \n");
    scanf(" %d", &pontos);

    printf("Informe a area total da cidade: \n");
    scanf("%f", &area);

    printf("Informe o valor do PIB: \n");
    scanf("%f", &pib);

    printf("Cidade:%s\n", cidade);
    printf("população:%f pessoas\n", populacao);
    printf("Pontos turísticos:%d\n", pontos);
    printf("Area de:%f metros quadrados\n", area);
    printf("PIB:%f reais\n", pib);

    return 0;
}
