#include <stdio.h>


int main()
{
    int n;
    printf("quanti elementi vuoi inserire nel vettore?");
    scanf("%i", &n);

    int arr[n];
    int *p = arr;

    for(int i = 0; i < n ; i++){
        printf("inserisci un numero: ");
        scanf("%i", &arr[i]);
    }
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += *(p + i);
    }
    printf("la somma è: %i", sum);
}