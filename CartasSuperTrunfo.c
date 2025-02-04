//#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
//int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

 //return 0;
//}
#include <stdio.h>
  
  int main(){

    // Definindo variáveis para armazenar os atributos da Cidade
    char codigo[10];
    char nome[50];
    int populacao;
    float area; //Será baseada em km²
    double pib;
    int pontos_turisticos;

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
    
    return 0;

    }