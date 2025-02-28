#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //declaração de variáveis da carta 1
    char estado_1[2], codigo_1[4], cidade_1[30];
    float area_1, pib_1;
    int populacao_1, nptur_1;

    //declaração de variáveis da carta 2
    char estado_2[2], codigo_2[4], cidade_2[30];
    int populacao_2, nptur_2;
    float area_2, pib_2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Entrada de dados da Carta 1
    printf("Digite os dados da Carta 1 \n");
    printf("Digite o estado: ");
    scanf("%s", &estado_1);
    printf("Digite o código do estado: ");
    scanf("%s", codigo_1);
    printf("Digite o nome da cidade: ");
    getchar();
    fgets(cidade_1, 30, stdin);
    cidade_1[strcspn(cidade_1, "\n")] = 0;
    printf("Digite a populacao da cidade: ");
    scanf("%i", &populacao_1);
    printf("Digite a area da cidade: ");
    scanf("%f", &area_1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_1);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%i", &nptur_1);
    printf("\n");

    //Entrada de dados da Carta 2
    printf("Digite os dados da Carta 2 \n");
    printf("Digite o estado: ");
    scanf("%s", &estado_2);
    printf("Digite o código do estado: ");
    scanf("%s", codigo_2);
    printf("Digite o nome da cidade: ");
    getchar();
    fgets(cidade_2, 30, stdin);
    cidade_2[strcspn(cidade_2, "\n")] = 0;
    printf("Digite a populacao da cidade: ");
    scanf("%i", &populacao_2);
    printf("Digite a area da cidade: ");
    scanf("%f", &area_2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_2);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%i", &nptur_2);
    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição dados da carta 1
    printf("Atributos Carta 1 \n");
    printf("Estado: %s \n", estado_1);
    printf("Codigo: %s \n", codigo_1);
    printf("Nome da cidade: %s \n", cidade_1);
    printf("Populacao: %i \n", populacao_1);
    printf("Area: %2.f \n", area_1);
    printf("PIB: %2.f \n", pib_1);
    printf("Pontos turisticos: %i \n", nptur_1);
    printf("\n");

    //Exibição dados da carta 2
    printf("Atributos Carta 2 \n");
    printf("Estado: %s \n", estado_2);
    printf("Codigo: %s \n", codigo_2);
    printf("Nome da cidade: %s \n", cidade_2);
    printf("Populacao: %i \n", populacao_2);
    printf("Area: %2.f \n", area_2);
    printf("PIB: %2.f \n", pib_2);
    printf("Pontos turisticos: %i \n", nptur_2);
    printf("\n");

    return 0;
}
