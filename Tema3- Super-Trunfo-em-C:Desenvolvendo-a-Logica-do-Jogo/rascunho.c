#include <stdio.h>


int main(){

    //Declarando as variáveis onde os dados serão armazenados!

    //Estado: Uma Letra de 'A' a 'H' (Representa um dos oito estados)
    char carta1_estado, carta2_estado;

    //Código da Carta: A letra do Estado seguide um número de 01 a 04
    char carta1_codigo[4];
    char carta2_codigo[4];

    //Nome da Cidade: O nome da cidade
    char carta1_cidade[16] = "Porteiras";
    char carta2_cidade[16] = "Brejo";

    //População: O número de habitantes da cidade;
    unsigned int carta1_populacao = 32000;
    unsigned int carta2_populacao = 33000;

    //Área (em km2): A área da ciadade em quilômetros quadrados
    double carta1_areaCidade = 142343434343.04858;
    double carta2_areaCidade = 98346783538375.902745;

    //PIB: O Produto Intero da Cidade
    double carta1_pib = 14000;
    double carta2_pib = 13000;

    //Número de Pontos Turísticos: A quantidade de pontos turísticos da cidade
    int carta1_pontosTuristicos = 17;
    int carta2_pontosTuristicos = 24;

    //Densidade Populacional: A Divisão da População da Cidade pela Área, representa a quantidade de habitantes/km²
    double carta1_densidadePopulacional = 112.0494;
    double carta2_densidadePopulacional = 13.0494; 


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
        printf("O jogador01 Venceu! Parabens Jogador 01! \n");
    } else if (resultado1 != resultado2) {
        printf("Houve um Empate! Que sorte! \n");
    } else {
        printf("O jogador02 Venceu! Parabens Jogador 02! \n");
    }
    
    return 0;


}