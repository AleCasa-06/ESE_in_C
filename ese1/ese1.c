#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, max;
    printf("inserisci il primo lato: ");
    scanf("%i", &a);
    printf("inserisci il secondo lato: ");
    scanf("%i", &b);
    printf("inserisci il terzo lato: ");
    scanf("%i", &c);

    if(a > b && a > c){
        max = a;

        if((pow(b,2) + pow(c,2)) == pow(a,2) ){
            printf("il triangolo è rettangolo!!");
        }
        else{
            printf("il triangolo non è rettangolo");
        }
    }
    if(b > a && b > c){
        max = b;

        if((pow(a,2) + pow(c,2)) == pow(b,2) ){
            printf("il triangolo è rettangolo!!");
        }
        else{
            printf("il triangolo non è rettangolo");
        }
    }
    else{
        if((pow(a,2) + pow(b,2)) == pow(c,2) ){
            printf("il triangolo è rettangolo!!");
        }
        else{
            printf("il triangolo non è rettangolo");
        }
    }

}
