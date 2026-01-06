#include <stdio.h>
#include <stdlib.h>
#include "artefakty.h"

struct element* glowa = NULL;

void start() 
{
    printf("BAZA ARTEFAKTOW\n");
}

int menu() 
{
    int x;
    printf("\n1. Dodaj\n");
    printf("2. Pokaz\n");
    printf("3. Koniec\n");
    printf("Wybor: ");
    scanf("%d", &x);
    return x;
}

void dodaj() 
{
    struct element* nowy = malloc(sizeof(struct element));
    
    printf("Nazwa: ");
    scanf("%s", nowy->d.nazwa);
    printf("Moc (0-10): ");
    scanf("%d", &nowy->d.moc);
    printf("Rok: ");
    scanf("%d", &nowy->d.rok);

    nowy->next = glowa;
    glowa = nowy;
}

void pokaz() 
{
    struct element* y = glowa;
    if (y == NULL) 
    {
        printf("Pusto\n");
        return;
    }
    printf("LISTA:\n");
    while(y != NULL) 
    {
        printf("%s %d %d\n", y->d.nazwa, y->d.moc, y->d.rok);
        y = y->next;
    }
}