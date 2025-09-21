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
    unsigned int carta1_populacao;
    unsigned int carta2_populacao;

    //Área (em km2): A área da ciadade em quilômetros quadrados
    double carta1_areaCidade;
    double carta2_areaCidade;

    //PIB: O Produto Intero da Cidade
    double carta1_pib;
    double carta2_pib;

    //Número de Pontos Turísticos: A quantidade de pontos turísticos da cidade
    int carta1_pontosTuristicos;
    int carta2_pontosTuristicos;

    //Densidade Populacional: A Divisão da População da Cidade pela Área, representa a quantidade de habitantes/km²
    double carta1_densidadePopulacional;
    double carta2_densidadePopulacional;

    //PIB per Capita: A divisão do PIB da Cidade pela População, indica a riqueza média por pessoa na cidade
    double carta1_pibPerCapita;
    double carta2_pibPerCapita;

    //Super Poder: A soma de todos os atributos numericos + o inverso da densidade populacional
    float carta1_superPoder;
    float carta2_superPoder;

    //Menu de Atributos
    int escolhaAtributo01,escolhaAtributo02;

    //Resultado Comparações
    int resultado1, resultado2;



    
    //Iniciando contato com o usuário!!
    printf("---------------------------------------------------------------------------------------------- \n");
    printf("Desafio Nível Aventureiro: Super Trunfo \n");
    printf("---------------------------------------------------------------------------------------------- \n");

//Cadastramento da CARTA01
    
    printf("Para Iniciarmos o jogo, você jogador, deve cadastrar suas 02 Cartas e para isso, basta colocar as informações de suas cartas nas instruções abaixo! \n");
    printf("\n");    

    printf("Vamos começar pela sua 1° Carta! \n");
    //ESTADO
    printf("Qual é o Estado? (Nota: De 'A' a 'H') \n");
    scanf(" %c", &carta1_estado);

    //CÓDIGO DA CARTA
    printf("Qual o código da Carta? (Nota:Sua letra de Estado seguida de um número de 01 04; EX: A01) \n");
    scanf("%s", carta1_codigo);

    //NOME DA CIDADE
    printf("Qual o nome da Cidade? \n");
    scanf("%s", carta1_cidade);

    //POPULAÇÂO
    printf("Qual a População? (Número de Habitantes) \n");
    scanf("%u", &carta1_populacao);

    //ARÉA DA CIDADE
    printf("Qual a Área da Cidade? (Tamanho numérico da extensão territorial: EX 125.000\n");
    scanf("%lf", &carta1_areaCidade);

    //PIB
    printf("Qual o PIB? (Nota: O Produto Interno da Cidade) \n");
    scanf("%lf", &carta1_pib);

    //Pontos Turísticos
    printf("Qual o número de pontos Turísticos? \n");
    scanf("%d", &carta1_pontosTuristicos);

    //Calculo da Densidade Ocupacional
    carta1_densidadePopulacional = carta1_populacao / carta1_areaCidade;

    //Calculo do Pib per Capita
    carta1_pibPerCapita = carta1_pib / carta1_populacao;

    //Calculo do Super Poder
    carta1_superPoder = carta1_populacao + carta1_areaCidade + carta1_pib + carta1_pontosTuristicos + carta1_pibPerCapita + carta1_densidadePopulacional;


//Cadastramento da CARTA02
    printf("Agora iremos Cadastrar a 2° Carta!! \n");
    
    printf("Qual o Estado da carta? (Nota: De 'A' a 'H') \n ");
    
    scanf(" %c", &carta2_estado);

    //CÓDIGO DA CARTA
    printf("Qual o código da Carta? (Nota:Sua letra de Estado seguida de um número de 01 04; EX: A01) \n");
    scanf("%s", carta2_codigo);

    //NOME DA CIDADE
    printf("Qual o nome da Cidade? \n");
    scanf("%s", carta2_cidade);

    //POPULAÇÂO
    printf("Qual a População? (Número de Habitantes) \n");
    scanf("%u", &carta2_populacao);

    // //ARÉA DA CIDADE
    printf("Qual a Área da Cidade? (Tamanho numérico da extensão territorial: EX 125.000\n");
    scanf("%lf", &carta2_areaCidade);

    //PIB
    printf("Qual o PIB? (Nota: O Produto Interno da Cidade) \n");
    scanf("%lf", &carta2_pib);

    //Pontos Turísticos
    printf("Qual o número de pontos Turísticos? \n");
    scanf("%d", &carta2_pontosTuristicos);

    //Calculo da Densidade Ocupacional
    carta2_densidadePopulacional = carta2_populacao / carta2_areaCidade;

    //Calculo do Pib per Capita
    carta2_pibPerCapita = carta2_pib / carta2_populacao;
    
    //Calculo do Super Poder
    carta2_superPoder = carta2_populacao + carta2_areaCidade + carta2_pib + carta2_pontosTuristicos + carta2_pibPerCapita + carta2_densidadePopulacional;

//Exibindo confirmação para o usuário!!!
    printf("TODOS OS DADOS SALVOS COM SUCESSO!!! \n");

    printf("\n");
//Imprimindo os dados!!!
    printf("Carta1: \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %u \n Área: %.2f km² \n PIB: %.2f \n Número de Pontos Turísticos: %d \n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f \n", carta1_estado, carta1_codigo, carta1_cidade, carta1_populacao, carta1_areaCidade, carta1_pib, carta1_pontosTuristicos, carta1_densidadePopulacional, carta1_pibPerCapita);

    printf("\n");

    printf("Carta2: \n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %u \n Área: %.2f km² \n PIB: %.2f \n Número de Pontos Turísticos: %d \n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f \n", carta2_estado, carta2_codigo, carta2_cidade, carta2_populacao, carta2_areaCidade, carta2_pib, carta2_pontosTuristicos, carta2_densidadePopulacional, carta2_pibPerCapita);

    printf("\n");
    printf("---------------------------------------------------------------------------------------------- \n");
    printf("\n");


    printf("------------------------------------------------------------------------------ \n");

    printf("Agora iremos ao Ponto Decisivo do jogo, o momento de Comparar as Cartas! \n");

    printf("Tecle o número correspondente ao 1° atributo a Comparar e pressione enter: \n");

    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Número de Pontos Turísticos \n");
    printf("5 - Densidade Demográfica \n");

    printf("Número-1°Atributo: ");
    scanf("%d", &escolhaAtributo01);

    switch(escolhaAtributo01) {

        //Caso Escolha População: 
        case 1: 
            printf("População selecionada! \n");

            resultado1 = carta1_populacao > carta2_populacao ? 1 : 0;

            printf("Resultado na Análise concluida com Sucesso!!! \n \n");
            break;
        
        case 2: 
            printf("Área foi Selecionada! \n");

            resultado1 = carta1_areaCidade > carta2_areaCidade ? 1 : 0;

            printf("Resultado na Análise concluida com Sucesso!!! \n \n");
        break;

        case 3: 
            printf("PIB Selecionado! \n");

            resultado1 = carta1_pib > carta2_pib ? 1 : 0;

            printf("Resultado na Análise concluida com Sucesso!!! \n \n");
        break;

        case 4: 
            printf("Número de Pontos Turísticos Secionada! \n");

            resultado1 = carta1_pontosTuristicos > carta2_pontosTuristicos ? 1 : 0;

            printf("Resultado na Análise concluida com Sucesso!!! \n \n");
        break;

        case 5: 
            printf("Densidade Populacional Selecionada! \n");

            resultado1 = carta1_densidadePopulacional < carta2_densidadePopulacional ? 1 : 0;

            printf("Resultado na Análise concluida com Sucesso!!! \n \n");
        break;

        default: 
            printf("Escolha Inválida \n");
    }

    printf("Tecle o número correspondente ao 2° atributo a Comparar e pressione enter: \n");

    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Número de Pontos Turísticos \n");
    printf("5 - Densidade Demográfica \n");

    printf("Número-2°Atributo: ");
    scanf("%d", &escolhaAtributo02);


    switch(escolhaAtributo02) {

        //Caso Escolha População: 
        case 1: 
            printf("População selecionada! \n");

            resultado2 = carta1_populacao > carta2_populacao ? 1 : 0;

            printf("Resultado na Análise concluida com Sucesso!!! \n \n");
            break;
        
        case 2: 
            printf("Área foi Selecionada! \n");

            resultado2 = carta1_areaCidade > carta2_areaCidade ? 1 : 0;

            printf("Resultado na Análise concluida com Sucesso!!! \n \n");
        break;

        case 3: 
            printf("PIB Selecionado! \n");

            resultado2 = carta1_pib > carta2_pib ? 1 : 0;

            printf("Resultado na Análise concluida com Sucesso!!! \n \n");
        break;

        case 4: 
            printf("Número de Pontos Turísticos Secionada! \n");

            resultado2 = carta1_populacao > carta2_populacao ? 1 : 0;

            printf("Resultado na Análise concluida com Sucesso!!! \n \n");
        break;

        case 5: 
            printf("Densidade Populacional Selecionada! \n");

            resultado2 = carta1_densidadePopulacional < carta2_densidadePopulacional ? 1 : 0;

            printf("Resultado na Análise concluida com Sucesso!!! \n \n");
        break;

        default: 
            printf("Escolha Inválida \n");
    }

    if (resultado1 && resultado2){
        printf("O Carta01 Venceu! Parabens Jogador 01! \n");
    } else if (resultado1 != resultado2) {
        printf("Houve um Empate! Que sorte! \n");
    } else {
        printf("O Carta02 Venceu! Parabens Jogador 02! \n");
    }
    
    return 0;
}