

#include <stdio.h>
#include <time.h>
  
  int main(){

    // Definindo variáveis para armazenar os atributos da Cidade
    char codigo[10];
    char nome[50];
    int populacao;
    float area; //Será baseada em km²
    double pib;
    int pontos_turisticos;
    time_t t;
        struct tm *infoTempo;

    // Obtendo a data e hora atual do sistema
    time(&t);
     infoTempo = localtime(&t);

    //Cadastro da Cidade
    printf("Cadastro da Carta- Cidade\n");
    printf("Código da Cidade (ex: A01,A02,B01,B02): ");
    scanf("%s", codigo);
    printf("Nome da Cidade: ");
    scanf("%s", nome);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área (km²): ");
    scanf("%f", &area);
    printf("PIB (em bilhões): ");
    scanf("%lf", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);

    //Exibindo os dados cadastrados
    printf("\nCarta cadastrada:\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    // Exibir data e hora separadamente no final do Código
    printf("Data: %02d/%02d/%02d\n", infoTempo->tm_mday, infoTempo->tm_mon + 1, infoTempo->tm_year % 100);
    printf("Hora: %02d:%02d\n", infoTempo->tm_hour, infoTempo->tm_min);
    
    return 0;

    }