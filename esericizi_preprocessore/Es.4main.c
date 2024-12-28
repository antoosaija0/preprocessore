#include<stdio.h>
#include"Es.4.h"

int main(void){
    float raggio;

    printf("Inserire il raggio del cerchio\n");
    scanf("%f", &raggio);

    printf("Il perimetro del cerchio è: %f cm\n", Perimetro(raggio));
    printf("L'area del cerchio è: %f cm^2\n", Area(raggio));


    return 0;

}