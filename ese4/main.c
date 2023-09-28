#include <stdio.h>

int main()
{
    int a = 1;
    int b = 0;



    while(a != b){
        a = b;
        printf("inserisci un valore: ");
        scanf("%i", &b);
    }
}
