#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define option_size 2

/* Cleans the current terminal */
void clear_term() {
    system("cls");
}

int main() 
{
    int slc;
    const char *opt[option_size] =
    { 
	"Moverse entre carpetas",
	"Editar archivos de texto",
	"Instalacion de programas externos",
    };

    clear_term();
    printf("Hola! Iniciando tu practica de linea de comandos.\n");
    printf(
	"Aqui aprenderas los comandos esenciales para controlar tu computadora solo con la terminal!.\n"
    );
    printf("\nQue quieres practicar hoy?\n");

    print_options(
	opt,
	option_size,
	&slc
    );

    printf("Elegiste: %d", slc);

    return 0;
}
