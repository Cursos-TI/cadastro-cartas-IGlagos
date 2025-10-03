#include <stdio.h>

int main (){

     // Variáveis da carta 1;

     int populacao1, pontosTuristicos1;
     float area1, pib1;
     char estado1;
     char codigo1[4];
     char nomeCidade1[50];

     // Variáveis da carta 2;

     int populacao2, pontosTuristicos2;
     float area2, pib2;
     char estado2;
     char codigo2[4];
     char nomeCidade2[50];


    // Entrada de dados da carta 1;

    printf("Digite os dados da carta 1: \n");
    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estado1); 

    printf("Digite o código da carta (ex: A01): \n ");
    scanf("%s", &codigo1);

    // O formato " %49[^\n]" é usado para ler uma string que pode conter espaços e limita o tamanho a 49 caracteres;
    printf("Digite o Nome da cidade: \n");
    scanf (" %49[^\n]", nomeCidade1);

    printf("Digite o tamanho da População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB em (Bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);


     // Entrada de dados da carta 2;

    printf("Digite os dados da carta 2: \n");
    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estado2); 

    printf("Digite o código da carta (ex: A02): \n");
    scanf("%s", codigo2);

    // O formato " %49[^\n]" é usado para ler uma string que pode conter espaços e limita o tamanho a 49 caracteres;
    printf("Digite o Nome da cidade: \n");
    scanf (" %49[^\n]", nomeCidade2);

    printf("Digite o tamanho da População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB em (Bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // Saída de dados da carta 1;

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km^2 \n", area1);
    printf("PIB: %.2f Bilhões de reais \n", pib1);
    printf("Pontos turísticos: %d", pontosTuristicos1);

    printf("\n");

    // Saída de dados da carta 2;

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km^2 \n", area2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("Pontos turísticos: %d", pontosTuristicos2);

    printf("\n");

    return 0;

}