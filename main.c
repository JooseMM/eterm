#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define class_opt 3

int main() 
{
    int slc;
    const char *opt[class_opt] =
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
        class_opt,
        &slc
    );

    printf("Elegiste: %d", slc);

    return 0;
}
