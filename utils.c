#include <stdio.h>
#include <stdlib.h>

/* print options */
void print_options(const char **opt, int opt_size, int *slc)
{
    int i;

    printf("\nOpciones:\n");
        printf("\n");

    for(i = 0; i < opt_size; i++) 
    {
        printf("%d. %s\n", i + 1, opt[i]);
    }

    printf("\nIngresa el numero de la opcion deseada: ");
    scanf("%d", slc);

    return;
}

/* Cleans the current terminal */
void clear_term() {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}