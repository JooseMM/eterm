#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define opt_class 3

/* Cleans the current terminal */
void clear_term() {
    system("clear");
}

int main() 
{
    int slc;
    const char *opt[opt_class] =
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
	opt_class,
	&slc
    );

    printf("Elegiste: %d", slc);

    return 0;
}
