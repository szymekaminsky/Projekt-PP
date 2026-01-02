#ifndef ARTEFAKTY_H
#define ARTEFAKTY_H

typedef struct {
    char nazwa[100];
    char pochodzenie[100];
    char cywilizacja[100];
    int zagrozenie;
    int rok;
    char status[50];
} dane;

struct element {
    dane d;  
    struct element* next;
};

void start();
int menu();

#endif