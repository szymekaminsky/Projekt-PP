#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "artefakty.h"

struct element* glowa = NULL;

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
    struct element* t = glowa;
    if (t == NULL) 
    {
        printf("Pusto\n");
        return;
    }
    
    printf("\nLISTA:\n");
    while(t != NULL) 
    {
        printf("%s %d %d\n", t->d.nazwa, t->d.moc, t->d.rok);
        t = t->next;
    }
}

void zapisz(char* n)
{
    FILE* f = fopen(n, "w");
    if (f == NULL) return;
    
    struct element* t = glowa;
    while(t != NULL) 
    {
        fprintf(f, "%s %d %d\n", t->d.nazwa, t->d.moc, t->d.rok);
        t = t->next;
    }
    
    fclose(f);
    printf("Zapisano dane\n");
}

void wczytaj(char* n)
{
    FILE* f = fopen(n, "r");
    if (f == NULL) return;

    char bufor[50];
    int m, r;

    while(fscanf(f, "%s %d %d", bufor, &m, &r) == 3) 
    {
        struct element* nowy = malloc(sizeof(struct element));
        strcpy(nowy->d.nazwa, bufor);
        nowy->d.moc = m;
        nowy->d.rok = r;
        nowy->next = glowa;
        glowa = nowy;
    }
    
    fclose(f);
}