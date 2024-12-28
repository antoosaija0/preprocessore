#include<stdio.h>

#define CUBE(num) (num)*(num)*(num)

int main (void){

    int valore;

    printf("Inserisci il valore al quale calcolare il cubo\n");
    scanf("%d", &valore);
    printf("Il cubo del valore %d corrisponde a %d\n", valore, CUBE(valore));

    return 0;

}