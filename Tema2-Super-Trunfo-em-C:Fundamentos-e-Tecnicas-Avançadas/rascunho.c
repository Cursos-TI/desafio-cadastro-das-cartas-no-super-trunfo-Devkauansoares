#include <stdio.h>


int main(){
    unsigned int populacao = 10;
    float area = 10.00;

    double  densidade = 10.00;

    double pib = 10.00;

    double pibPerCapita;

    float superPoder = populacao + area + pib + densidade;

    printf("Super poder: %.2f \n", superPoder);



    densidade = (float) populacao / area;
    pibPerCapita = pib / (float) populacao;

    printf("Densidade: %.2f \n", densidade);

 
    printf("Pib per capita: %.2f \n", pibPerCapita);

    

    return 0;


}