#include <stdio.h>

int main(){

    char Estado1 ;        // Estado: letra de A a B
    char Codigo1 [3];     // Código: ex. A01
    char cidade1 [50] ;   // Nome da cidade
    int População1;       // População
    float Area1;          // Área em km²
    float PIB1;           // PIB
    int numeros1;         // Número de pontos turísticos
    
    //CARTA 01

    //ESTADO
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-B): ");
    scanf("%c", &Estado1);
    //CODIGO DA CARTA
    printf("Código da carta (ex: A01): ");
    scanf("%s", &Codigo1);
    //NOME DA CIDADE
    printf("Nome da Cidade: ");
    scanf("%s", &cidade1);
    //NUMERO DA POPULCAO
    printf("População: ");
    scanf("%d",&População1);
    //TAMANHO DA AREA
    printf("Área (em km²): ");
    scanf("%f", &Area1);
    //VALOR DO PIB
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &PIB1);
    //NUMEROS DE PONTOS TURISTICOS 
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numeros1);

    getchar();

    char Estado2 ;        // Estado: letra de A a B
    char Codigo2 [3];     // Código: ex. A01
    char cidade2[50] ;   // Nome da cidade
    int População2;       // População
    float Area2;          // Área em km²
    float PIB2;           // PIB
    int numeros2;         // Número de pontos turísticos

    printf("=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-B): ");
    scanf("%c", &Estado2); 
    //CODIGO DA CARTA
    printf("Código da carta (ex: A02): ");
    scanf("%s", &Codigo2);
    //NOME DA CIDADE
    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);
    //NUMERO DA POPULCAO
    printf("População: ");
    scanf("%d",&População2);
    //TAMANHO DA AREA
    printf("Área (em km²): ");
    scanf("%f", &Area2);
    //VALOR DO PIB
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &PIB2);
    //NUMEROS DE PONTOS TURISTICOS 
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numeros2);

    // Exibindo os dados cadastrados

    printf("\n=== Carta 1 ===\n");
    printf("Estado 1: %c\n",Estado1);
    printf("Codigo 1: %s\n",Codigo1);
    printf("Nome da Cidade 1: %s\n", cidade1);
    printf("População 1: %d\n",População1);
    printf("Área 1: %.2f\n", Area1);
    printf("PIB 1: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos 1: %d\n", numeros1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado 2: %c\n",Estado2);
    printf("Codigo 2: %s\n",Codigo2);
    printf("Nome da Cidade 2: %s\n", cidade2);
    printf("População 2: %d\n",População2);
    printf("Área 2: %.2f\n", Area2);
    printf("PIB 2: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos 2: %d\n", numeros2);




}