#include <stdio.h>

int main()
{
    char str[100];

    char *p = str;

    printf("inserisci stringa di max 100 caratteri: ");
    gets(str);

    int sum = 0;

    while(*p != '\0'){
        sum++;
        *p++;
    }
    printf("la stringa ha %i caratteri", sum);
}