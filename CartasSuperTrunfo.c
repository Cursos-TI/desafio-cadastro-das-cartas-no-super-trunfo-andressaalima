#include <stdio.h>

// Desafio Super Trunfo - Países (Aluna: Andressa Angélica de Lima)
// Tema 1 - Cadastro das Cartas
// Nível escolhido: NOVATO - Desenvolvimento do sistema de cadastro de cartas de cidades.


int main() {

    //Aqui foram feitos os cadastros das variáveis, com nomes significativos.
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    //Aqui começamos a interagir com o usuário, para que o mesmo preencha os dados das cartas.
    printf("Vamos cadastrar as cartas para o nosso jogo Super Trunfo?\n");
    printf("\n");
    printf("Primeiro, digite os dados da primeira carta.\n");
    printf("\n");

    //A partir desse ponto, o usuário começa a digitar os dados da primeira carta.

    printf("Digite uma letra entre 'A' e 'H', correspondente ao estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta, formado pela letra do estado e um número entre '01' e '04': \n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade1);

    printf("Digite o número de habitantes da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf(" %f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d", &pontos1);

    printf("\n");

    //A partir desse ponto, o usuário começa a digitar os dados da segunda carta.

    printf("Agora, digite os dados da segunda carta.\n");
    printf("\n");

    printf("Digite uma letra entre 'A' e 'H', correspondente ao estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta, formado pela letra do estado e um número entre '01' e '04': \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite o número de habitantes da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf(" %f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf(" %d", &pontos2);


    //A partir daqui, os dados informados serão exibidos na tela, para conferência do usuário.

    printf("\n\n");
    printf("Vamos conferir os dados informados?\n");
    printf("\n");

    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf ("População: %d habitantes\n", populacao1);
    printf ("Área: %.2f km²\n", area1);
    printf ("PIB: R$ %.2f\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n", pontos1);
    
    printf("\n");
    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf ("População: %d habitantes\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: R$ %.2f\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", pontos2);
    printf("\n");

    return 0;
}

