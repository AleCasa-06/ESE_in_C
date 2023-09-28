#include <stdio.h>
#include <math.h>

int main()
{
    int listaNum[5] = {};
    int sum = 0;
    float media;

    for(int i = 0; i < 5; i++){
        printf("inserisci il valore %i: ", i);
        scanf("%i", &listaNum[i]);
        sum += listaNum[i];

    }
    media = (float) sum/5;
    printf("la somma è: %i \n" , sum);
    printf("la media è: %f" , media);
}
