#include <stdio.h>
#include <stdlib.h>

#define opt_class 3

/* Cleans the current terminal */
void clear_term() {
    system("clear");
}

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
