#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char Cidade1[20], Estado1[20], Carta1[5];
    float Area1, PIB1;
    int Populacao1, NPTurist1;

    // Variáveis da Carta 2
    char Cidade2[20], Estado2[20], Carta2[5];
    float Area2, PIB2;
    int Populacao2, NPTurist2;

    // Coleta de dados da Carta 1
    printf("=== Carta 1 ===\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade1);

    printf("Digite o nome do estado: ");
    scanf("%s", Estado1);

    printf("Digite o código da carta: ");
    scanf("%s", Carta1);

    printf("Digite a Área da cidade em km²: ");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &NPTurist1);

    // Coleta de dados da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade2);

    printf("Digite o nome do estado: ");
    scanf("%s", Estado2);

    printf("Digite o código da carta: ");
    scanf("%s", Carta2);

    printf("Digite a Área da cidade em km²: ");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &NPTurist2);

    // Exibição dos dados
    printf("\n===== CARTAS =====\n");

    printf("\nCarta 1:\n");
    printf("Cidade: %s\n", Cidade1);
    printf("Estado: %s\n", Estado1);
    printf("Código da carta: %s\n", Carta1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("População: %d\n", Populacao1);
    printf("Pontos turísticos: %d\n", NPTurist1);

    printf("\nCarta 2:\n");
    printf("Cidade: %s\n", Cidade2);
    printf("Estado: %s\n", Estado2);
    printf("Código da carta: %s\n", Carta2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("População: %d\n", Populacao2);
    printf("Pontos turísticos: %d\n", NPTurist2);

    // Mantive as anotações originais, fiz o código no VSC e depois copiei para o github por que achei melhor assim.

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}