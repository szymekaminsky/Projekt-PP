#include <stdio.h>
#include <stdlib.h>
#include "artefakty.h"

int main(int argc, char *argv[]) 
{
    if (argc < 2) {
        printf("Podaj plik\n");
        return 1;
    }

    struct element* lista = NULL;
    int a = 0;

    start();

    while(a != 3) {
        a = menu();

        switch(a) 
        {
            case 1:
                printf("Tu bedzie dodawanie\n");
                break;
            case 2:
                printf("Tu bedzie lista\n");
                break;
            case 3:
                printf("Koniec\n");
                break;
            default:
                printf("Zly numer\n");
        }
    }

    return 0;
}