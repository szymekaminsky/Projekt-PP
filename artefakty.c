#include <stdio.h>
#include "artefakty.h"

void start() 
{
    printf("BAZA ARTEFAKTOW\n");
}

int menu() 
{
    int x;
    printf("1. Dodaj\n");
    printf("2. Pokaz\n");
    printf("3. Koniec\n");
    printf("Wybor: ");
    scanf("%d", &x);
    return x;
}