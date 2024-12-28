#include<stdio.h>

#define Lire_Euro(Lire) (Lire)/1936.36
#define Euro_Lire(Euro) (Euro)/1936.36

int main(void){
    float valore;
    char scelta;

    printf("digita:\n");
    printf("a) da lire a euro\n");
    printf("b) da euro a lire\n");
    scanf("%c", &scelta);

    printf ("Inserisci il valore da trasformare\n");
    scanf("%f", &valore);

    switch (scelta) {
        case 'a':
            printf("Le lire seguenti: %f in euro corrispondono a %f\n", valore, Lire_Euro (valore)    );
        break;

        case 'b':
            printf("I seguenti euri: %f in lire corrispondono a: %f\n", valore, Euro_Lire (valore)     );
        break;

        default:
            printf("Conversione non riconosciuta\n");

    }
        return 0;



}