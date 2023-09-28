#include <stdio.h>


int main()
{

    int arr[5] = {};

    for(int i = 0; i < 5; i++){
        printf("inserisci il numero %i: ", i);
        scanf("%i", &arr[i]);
    }
    int a;
    printf("inserisci il valore che vuoi cercare nell'array: ");
    scanf("%i", &a);
    int *p = &a;

    for(int i = 0; i < 5; i++){
        if(*p == arr[i]){
            printf("numero presente");
            break;
        }
        else{
            printf("numero non presente");
            break;
        }
    }
}