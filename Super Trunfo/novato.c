#include <stdio.h>

int main() {
    char nome[50];

    // Variáveis da carta 1
    char codigo1[20], estado1[30], cidade1[30];
    int populacao1, pontos1;
    float area1, pib1;

    // Variáveis da carta 2
    char codigo2[20], estado2[30], cidade2[30];
    int populacao2, pontos2;
    float area2, pib2;

    // Nome do usuário
    printf("Olá usuário, qual o seu nome: ");
    scanf("%49s", nome);
    printf("Seja bem-vindo, %s!\n", nome);

    // Carta 1
    printf("\n---Carta 1---\n");
    printf("Digite o código da carta: ");
    scanf("%19s", codigo1);

    printf("Digite o estado: ");
    scanf("%29s", estado1);

    printf("Digite o nome da cidade: ");
    scanf("%29s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (Km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\n---Carta 2---\n");

    printf("Digite o código da carta: ");
    scanf("%19s", codigo2);

    printf("Digite o estado: ");
    scanf("%29s", estado2);

    printf("Digite o nome da cidade: ");
    scanf("%29s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (Km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Mostrar cartas
    printf("\n---Cartas do usuário---\n");
    
    printf("\nCarta 1:\nCódigo: %s\nEstado: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f Km²\nPIB: %.2f\nPontos Turísticos: %d\n",
           codigo1, estado1, cidade1, populacao1, area1, pib1, pontos1);

    printf("\nCarta 2:\nCódigo: %s\nEstado: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f Km²\nPIB: %.2f\nPontos Turísticos: %d\n",
           codigo2, estado2, cidade2, populacao2, area2, pib2, pontos2);

    printf("\nFim do programa!\n");
    return 0;
}
