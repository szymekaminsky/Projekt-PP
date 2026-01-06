#include <stdio.h>
#include <stdlib.h>
#include "artefakty.h"

int main(int argc, char *argv[]) 
{
    if (argc < 2) 
    {
        printf("Podaj plik\n");
        return 1;
    }

    int a = 0;
    start();

    while(a != 3) 
    {
        a = menu();

        switch(a) 
        {
            case 1:
                dodaj();
                break;
            case 2:
                pokaz();
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