#include <stdio.h>

int main(){

    char estado1, cidade1[50], codigo1[4], estado2, cidade2[50], codigo2[4]; // <- Divisão de variáveis conforme quantidades de cartas.
    int populcao1, pontos1, populcao2, pontos2;
    float area1, pib1, area2, pib2;

/*
    %d: Imprime um inteiro no formado decimal.
    %i: Equivalente a %d.
    %f: Imprime um numero de ponto flutuante no formato padrão.
    %e: Imprime um número de pronto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
*/

    printf("Carta 1: \n Digite o estado da carta: \n");
    scanf(" %c", &estado1); // <- Espaços antes dos identificadores para não pular linhas e respostas.
    printf("Digite o código da carta: \n");
    scanf(" %s", &codigo1);
    getchar(); // <- getchar Para limpar o buffer e evitar que informações se misturem devido aos dois %s.
    printf("Digite o nome da cidade da carta: \n");
    scanf(" %[^\n]", cidade1); // <- %[^\n] Para possibilitar que o scanf leia cidades com mais de uma palavra.
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populcao1);
    printf("Digite a área da cidade: \n");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf(" %d", &pontos1);

    printf("\nCarta 2: \n Digite o estado da carta: \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: \n");
    scanf(" %s", &codigo2);
    getchar();
    printf("Digite o nome da cidade da carta: \n");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população da cidade: \n");
    scanf(" %d", &populcao2);
    printf("Digite a área da cidade: \n");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf(" %d", &pontos2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populcao1);
    printf("Área: %.2f Km²\n", area1); // <- %.2f para imprimir duas casas decimais após a virgula ou ponto.
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n\n", pontos1); // <- Atenção aos espaços de linha para garantir a organização das informações.

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populcao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n\n\n", pontos2);

    return 0;




}