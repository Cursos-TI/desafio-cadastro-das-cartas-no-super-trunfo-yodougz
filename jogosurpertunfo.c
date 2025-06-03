#include <stdio.h>

int main() {
    // Dados das Cartas
    char estado1, estado2; 
    char codigo1[4], codigo2[4];
    char nomedacidade1[50], nomedacidade2[50];
    int populaçao1, populaçao2;
    float area1, area2;
    float pib1, pib2;
    int pontosdeturismo1, pontosdeturismo2;
    
    // Cadastro da carta1

    printf("Digite o estado da cidade (A-H): ");
    scanf(" %c", &estado1);

    printf("codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %d\n", nomedacidade1);

    printf("Populaçao: ");
    scanf("%d", &populaçao1);

    printf("Area da cidade: ");
    scanf("%f", &area1);

    printf("Pib: ");
    scanf("%f", &pib1);

    printf("Pontos de turismo: ");
    scanf("%d", &pontosdeturismo1);

    // Cadastro da carta2

    printf("Digite o estado da cidade (A-H): ");
    scanf("%c", &estado2);

    printf("codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %d\n", nomedacidade2);

    printf("Populaçao: ");
    scanf("%d", &populaçao2);

    printf("Area da cidade: ");
    scanf("%f", &area2);

    printf("Pib: ");
    scanf("%f", &pib2);

    printf("Pontos de turismo: ");
    scanf("%d", &pontosdeturismo2);

    //Informaçoes cadastradas

    printf("carta1:\n");
    printf("estado: %c\n", estado1);
    printf("codigo: %&\n", codigo1);
    printf("cidade: %&\n", nomedacidade1);
    printf("populaçao: %d\n", populaçao1);
    printf("area da cidade: %d\n", area1);
    printf("pib: %d\n", pib1);
    printf("pontos de turismo: %d\n", pontosdeturismo1);

    printf("carta2:\n");
    printf("estado: %c\n", estado2);
    printf("codigo: %&\n", codigo2);
    printf("cidade: %&\n", nomedacidade2);
    printf("populaçao: %d\n", populaçao2);
    printf("area da cidade: %d\n", area2);
    printf("pib: %d\n", pib2);
    printf("pontos de turismo: %d\n", pontosdeturismo2);

    return 0;
}
