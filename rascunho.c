#include <stdio.h>


int main(){
    int populacao = 12325000;
    float area = 1521.11;

    double  densidade;

    double pib = 699280000000.00;

    double pibPerCapita;



    densidade = (float) populacao / area;
    pibPerCapita = pib / (float) populacao;

    printf("Densidade: %.2f \n", densidade);

 
    printf("Pib per capita: %.2f \n", pibPerCapita);

    

    return 0;


}