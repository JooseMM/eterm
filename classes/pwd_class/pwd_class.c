#include "../../utils.h"
#include <stdio.h>

const char *pwd = 
	"¡Genial! Primero, veamos un resumen del sistema de carpetas en Linux.\n\n"
	"Aca las carpetas se organizan en una estructura jerárquica que comienza\n"
	"desde la raíz, representada por '/'. Esta es la carpeta principal de todo el sistema.\n\n"
	"Cuando abres una terminal, por lo general te ubicás automáticamente en la\n"
	"carpeta personal de tu usuario. Si quieres saber exactamente en qué carpeta\n"
	"estás, puedes usar el comando \033[30;1;4mpwd\033[0m, que significa print working directory.\n\n"
	"Intentalo tu ahora, escribe 'pwd' y presiona la tecla enter\n\n";

const char *successful = 
	"\n¡Genial! Arriba puedes ver exactamente en qué carpeta te encuentras.\n\n"
	"Para leerla correctamente, hazlo de izquierda a derecha, \n"
	"usando '/' como un separador visual por ahora.\n";

const char *opt_slc = 
    "Vale, ahora que ya sabes cómo ubicarte, pasemos a la siguiente clase.\n";

#define opt_len 2

void pwd_class(int *slc) 
{
	char cmd[255];
	char *ban[4] = { "shutdown", "reboot", "rm", "cd" };
	char *ok[1] = { "pwd" };

	cls_term();
	cls_buf();

	printf("%s", pwd);

	while(playground(cmd, ban, 4, ok, 1) != 0)
		; // wait until the user entries a valid command
	printf("%s", successful);

	printf("%s", opt_slc);

	const char *opt[opt_len] = { "Empezar la clase siguiente.", "Terminar el programa." };

	select_options(opt, 2, slc);
}
