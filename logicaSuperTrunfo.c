#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigoCidadeA, codigoCidadeB, contadorA = 0, contadorB = 0;
    char nomeA[50], nomeB[50];
    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontos_turisticosA, pontos_turisticosB;
   
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //INSERIR DADOS DA PRIMEIRA CARTA
    printf("INSERIR DADOS DA CARTA 'A' \n"); 

    //PRIMEIRA CARTA
    printf("Informe o código da cidadeA:\n");
    scanf(" %d", &codigoCidadeA);

    printf("Informe o nome da cidadeA: \n");
    scanf(" %s", nomeA);

    printf("Informe a população da cidadeA: \n");
    scanf("%d", &populacaoA);

    printf("Informe a área da cidadeA: \n");
    scanf("%f", &areaA);

    printf("Informe o PIB da cidadeA: \n");
    scanf("%f", &pibA);

    printf("Informe o número de pontos turísticos da cidadeA: \n");
    scanf("%d", &pontos_turisticosA);

    printf("\n-----------------\n");
    //INSERIR DADOS DA SEGUNDA CARTA
    printf("PROXIMA CARTA: \n"); 

    //INSERIR DADOS DA SEGUNDA CARTA
    printf("INSERIR DADOS DA CARTA 'B': \n"); 

    //SEGUNDA CARTA
    printf("Informe o código da cidadeB:\n");
    scanf(" %d", &codigoCidadeB);

    printf("Informe o nome da cidadeB: \n");
    scanf(" %s", nomeB);

    printf("Informe a população da cidadeB: \n");
    scanf("%d", &populacaoB);

    printf("Informe a área da cidadeB: \n");
    scanf("%f", &areaB);

    printf("Informe o PIB da cidadeB: \n");
    scanf("%f", &pibB);

    printf("Informe o número de pontos turísticos da cidadeB: \n");
    scanf("%d", &pontos_turisticosB);

    
    //ESPAÇO
    printf(" \n-----------------\n");
    printf(" RESULTADO DAS CARTAS': \n"); 
    printf(" \n-----------------\n");

    // DADOS DA CARTA "A"
    printf("\n--- DADOS DA CARTA 'A' ---\n");
    printf("Código: %d\n", codigoCidadeA);
    printf("Nome: %s\n", nomeA);
    printf("População: %d\n", populacaoA);
    printf("Área: %f\n", areaA);
    printf("PIB: %f\n", pibA);
    printf("Pontos Turísticos: %d\n", pontos_turisticosA);

    //ESPAÇO
     printf("\n-----------------\n");

    // DADOS DA CARTA "B"
    printf("\n--- DADOS DA CARTA 'B' ---\n");
    printf("Código: %d\n", codigoCidadeB);
    printf("Nome: %s\n", nomeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %f\n", areaB);
    printf("PIB: %f\n", pibB);
    printf("Pontos Turísticos: %d\n", pontos_turisticosB);

    //ESPAÇO
    printf(" \n-----------------\n");
        
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    if (populacaoA > populacaoB) {
        printf("Carta: 'A' é mais populosa.\n");
        contadorA = contadorA + 1;
    } 
    else if (populacaoA < populacaoB){
        printf("Carta 'B' é mais populosa.\n");
        contadorB = contadorB + 1;
    } else
    {
        {printf("As Cidades tem a mesma quantidade de população.\n");}
    }
    
    
    //==========AREA=============
    if (areaA > areaB) {
        printf("Area da Carta 'A' é maior.\n");
        contadorA = contadorA + 1;
    } else if (areaA < areaB){
        printf("Area da Carta 'B' é maior.\n");
        contadorB = contadorB + 1;
    } else
    {
        {printf("As Cidades tem o mesmo tamanho.\n");}
    }

    //=========PIB==============
    if (pibA > pibB) {
        printf("Carta 'A' o PIB é maior.\n");
        contadorA = contadorA + 1;
    } else if (pibA < pibB){
        printf("Carta 'B' o PIB é maior.\n");
        contadorB = contadorB + 1;
    } else
    {
        {printf("As Cidades tem o mesmo PIB.\n");}
    }

    //=======PONTOS TURISTICOS====
    if (pontos_turisticosA > pontos_turisticosB) {
        printf("Carta 'A' tem mais pontos turisticos.\n");
        contadorA = contadorA + 1;
    } else if (pontos_turisticosA < pontos_turisticosB){
        printf("Carta 'B' tem mais pontos turisticos.\n");
        contadorB = contadorB + 1;
    } else
    {
        {printf("As Cidades tem a mesma quantidade de pontos turisticos.\n");}
    }

    // Resultado da Rodada:
    printf("\n-----------------\n");
    printf(" CARTA VENCEDORA: \n"); 
    printf("\n-----------------\n");

    if(contadorA > contadorB){
        printf("A carta vencedora é a: %s\n", nomeA);
    } 
    if (contadorA < contadorB){
        printf("A carta vencedora é a: %s\n", nomeB);
    } 
    else {
        printf("Empate!\n");
    }

    return 0;
}