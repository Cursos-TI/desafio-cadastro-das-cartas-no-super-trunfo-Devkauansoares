#include <stdio.h>

int main(){

//Declarando as variáveis onde os dados serão armazenados!

    //Estado: Uma Letra de 'A' a 'H' (Representa um dos oito estados)
    char carta1_estado, carta2_estado;

    //Código da Carta: A letra do Estado seguide um número de 01 a 04
    char carta1_codigo[4];
    char carta2_codigo[4];

    //Nome da Cidade: O nome da cidade
    char carta1_cidade[16];
    char carta2_cidade[16];

    //População: O número de habitantes da cidade;
    int carta1_populacao;
    int carta2_populacao;

    //Área (em km2): A área da ciadade em quilômetros quadrados
    float carta1_areaCidade;
    float carta2_areaCidade;

    //PIB: O Produto Intero da Cidade
    float carta1_pib;
    float carta2_pib;

    //Número de Pontos Turísticos: A quantidade de pontos turísticos da cidade
    int carta1_pontosTuristicos;
    int carta2_pontosTuristicos;

//Iniciando contato com o usuário!!
    printf("---------------------------------------------------------------------------------------------- \n");
    printf("Desafio Nível Iniciante: Super Trunfo \n");
    printf("---------------------------------------------------------------------------------------------- \n");

//Cadastramento da CARTA01
    
    printf("Para Iniciarmos o jogo, você jogador, deve cadastrar suas 02 Cartas e para isso, basta colocar as informações de suas cartas nas instruções abaixo! \n");
    printf("\n");    

    printf("Vamos começar pela sua 1° Carta! \n");
    //ESTADO
    printf("Qual é o Estado? (Nota: De 'A' a 'H') \n");
    scanf("%c", &carta1_estado);

    //CÓDIGO DA CARTA
    printf("Qual o código da Carta? (Nota:Sua letra de Estado seguida de um número de 01 04; EX: A01) \n");
    scanf("%s", &carta1_codigo);

    //NOME DA CIDADE
    printf("Qual o nome da Cidade? \n");
    scanf("%s", &carta1_cidade);

    //POPULAÇÂO
    printf("Qual a População? (Número de Habitantes) \n");
    scanf("%d", &carta1_populacao);

    //ARÉA DA CIDADE
    printf("Qual a Área da Cidade? (Tamanho numérico da extensão territorial: EX 125.000\n");
    scanf("%f", &carta1_areaCidade);

    //PIB
    printf("Qual o PIB? (Nota: O Produto Interno da Cidade) \n");
    scanf("%f", &carta1_pib);

    //Pontos Turísticos
    printf("Qual o número de pontos Turísticos? \n");
    scanf("%d", &carta1_pontosTuristicos);


    
//Cadastramento da CARTA02
    printf("Agora iremos Cadastrar a 2° Carta!! \n");
    
    printf("Qual o Estado da carta? (Nota: De 'A' a 'H') \n ");
    getchar();
    scanf("%c", &carta2_estado);

    //CÓDIGO DA CARTA
    printf("Qual o código da Carta? (Nota:Sua letra de Estado seguida de um número de 01 04; EX: A01) \n");
    scanf("%s", &carta2_codigo);

    //NOME DA CIDADE
    printf("Qual o nome da Cidade? \n");
    scanf("%s", &carta2_cidade);

    //POPULAÇÂO
    printf("Qual a População? (Número de Habitantes) \n");
    scanf("%d", &carta2_populacao);

    //ARÉA DA CIDADE
    printf("Qual a Área da Cidade? (Tamanho numérico da extensão territorial: EX 125.000\n");
    scanf("%f", &carta2_areaCidade);

    //PIB
    printf("Qual o PIB? (Nota: O Produto Interno da Cidade) \n");
    scanf("%f", &carta2_pib);

    //Pontos Turísticos
    printf("Qual o número de pontos Turísticos? \n");
    scanf("%d", &carta2_pontosTuristicos);

//Exibindo confirmação para o usuário!!!
    printf("TODOS OS DADOS SALVOS COM SUCESSO!!! \n");

    printf("\n");
//Imprimindo os dados!!!
    printf("Carta1: \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: %.2f \n Número de Pontos Turísticos: %d ", carta1_estado, carta1_codigo, carta1_cidade, carta1_populacao, carta1_areaCidade, carta1_pib, carta1_pontosTuristicos);

    printf("\n");

    printf("Carta2: \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %.2f km² \n PIB: %.2f \n Número de Pontos Turísticos: %d ", carta2_estado, carta2_codigo, carta2_cidade, carta2_populacao, carta2_areaCidade, carta2_pib, carta2_pontosTuristicos);

    return 0;
}