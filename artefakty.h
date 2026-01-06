#ifndef ARTEFAKTY_H
#define ARTEFAKTY_H

typedef struct 
{
    char nazwa[50];
    int moc;
    int rok;
} dane;

struct element 
{
    dane d;  
    struct element* next;
};

extern struct element* glowa;

void start();
int menu();
void dodaj();
void pokaz();

#endif