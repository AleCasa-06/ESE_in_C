#include <stdio.h>
#include <math.h>

int calcolaTempo(int ore, int min, int sec ){
    int oreSec = ore * 3600;
    int minSec = min * 60;

    int sum = oreSec + minSec + sec;

    return sum;
}

int main()
{
    int ore1, min1, sec1;
    int ore2, min2, sec2;


    printf("inserisci il primo orario in modo: ore, minuti, secondi: ");
    scanf("%i %i %i", &ore1, &min1, &sec1);
    printf("inserisci il secondo orario in modo: ore, minuti, secondi: ");
    scanf("%i %i %i", &ore2, &min2, &sec2);






    int ris1 = calcolaTempo(ore1, min1, sec1);
    int ris2 = calcolaTempo(ore2, min2, sec2);

    if(ris1 > ris2){
        printf("il primo orario è maggiore del secondo");

    }
    else{
        printf("il secondo orario è maggiore del primo");
    }




}
