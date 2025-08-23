#include <stdio.h>

int main(){

    char estado1 ;                         // Estado: letra de A a B
    char codigo1 [4];                     // Código: ex. A01
    char cidade1 [50] ;                  // Nome da cidade
    unsigned long int populacao1;       // População
    float area1;                       // Área em km²
    float pib1;                       // PIB
    int numerospontosturiticos1;     // Número de pontos turísticos
               

    char estado2 ;                        // Estado: letra de A a B
    char codigo2 [4];                    // Código: ex. A01
    char cidade2[50] ;                  // Nome da cidade
    unsigned long int populacao2;      // População
    float area2;                      // Área em km²
    float pib2;                      // PIB
    int numerospontosturisticos2;  // Número de pontos turísticos  
     

    //CARTA 01

    //ESTADO
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-B):");
    scanf(" %c", &estado1);
    //CODIGO DA CARTA
    printf("Código da carta (ex: A01): ");
    scanf("%s", &codigo1);
    //NOME DA CIDADE
    printf("Nome da Cidade: ");
    scanf("%s", &cidade1);
    //NUMERO DA POPULCAO
    printf("População: ");
    scanf("%lu",&populacao1);
    //TAMANHO DA AREA
    printf("Área (em km²): ");
    scanf("%f", &area1);
    //VALOR DO PIB
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    //NUMEROS DE PONTOS TURISTICOS 
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numerospontosturiticos1);

    //NÚMERO DE HABITANTES POR QUILÔMETRO QUADRADO
    float densidadepopulacional1 = populacao1 / area1;
    //RIQUEZA MÉDIA POR PESSOA NA CIDADE
    float  pibpercapita1 = pib1 / populacao1;
    
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-B):");
    scanf(" %c", &estado2); 
    //CODIGO DA CARTA
    printf("Código da carta (ex: B02): ");
    scanf("%s", &codigo2);
    //NOME DA CIDADE
    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);
    //NUMERO DA POPULCAO
    printf("População: ");
    scanf("%lu",&populacao2);
    //TAMANHO DA AREA
    printf("Área (em km²): ");
    scanf("%f", &area2);
    //VALOR DO PIB
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    //NUMEROS DE PONTOS TURISTICOS 
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numerospontosturisticos2);

    //NÚMERO DE HABITANTES POR QUILÔMETRO QUADRADO
    float densidadepopulacional2 = populacao1 / area2;
    //RIQUEZA MÉDIA POR PESSOA NA CIDADE
    float pibpercapita2 = pib2 / populacao2;    

    // calculo do super poder 
    float superpoder1  = populacao1 + area1 + pib1 + numerospontosturisticos2 +
    pibpercapita1 + (1 / densidadepopulacional1) ;  
    float superpoder2 = populacao2 + area2 + pib2 + numerospontosturisticos2 + 
    pibpercapita2 + (1 / densidadepopulacional2);
    // Exibindo os dados cadastrados

    printf("\n=== Carta 1 ===\n");
    printf("Estado : %c\n",estado1);
    printf("Codigo : %s\n",codigo1);
    printf("Nome da Cidade : %s\n", cidade1);
    printf("População : %d\n",populacao1);
    printf("Área : %.2f\n", area1);
    printf("PIB : %.2f\n", pib1);
    printf("Número de Pontos Turísticos 1: %d\n", numerospontosturiticos1);
    printf("Densidade Populacional : %.2f\n", densidadepopulacional1);
    printf("PIB per Capita : %.2f\n", pibpercapita1); //RIQUEZA MÉDIA POR PESSOA NA CIDADE
 
    printf("\n=== Carta 2 ===\n");
    printf("Estado : %c\n",estado2);
    printf("Codigo : %s\n",codigo2);
    printf("Nome da Cidade : %s\n", cidade2);
    printf("População : %d\n",densidadepopulacional1);
    printf("Área : %.2f\n", area2);
    printf("PIB : %.2f\n", pib2);
    printf("Número de Pontos Turísticos : %d\n", numerospontosturisticos2);
    printf("Densidade Populacional: %.2f\n",densidadepopulacional2 );
    printf("PIB per Capita: %.2f\n", pibpercapita2); 

    printf("\n ====COMPARAÇÃO DE CARTAS:==== \n");

    // Se populacao1 > populacao2, imprime 1 (verdadeiro), senão 0 (falso)
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2); 

    // Se area1 > area2, imprime 1 (verdadeiro), senão 0 (falso)
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

    // Se pib1 > pib2, imprime 1 (verdadeiro), senão 0 (falso)
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    // Se numPontoTuristico1 > numPontoTuristico2, imprime 1, senão 0
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numerospontosturiticos1 > numerospontosturisticos2);

    // Aqui está invertido: Carta 2 vence se densidade1 < densidade2
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2);

    // Se PibPerCapita1 > PibPerCapita2, imprime 1, senão 0
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);

    // Se SuperPoder1 > SuperPoder2, imprime 1, senão 0
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);



    return 0;

   


}