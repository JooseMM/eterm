#include "../../utils.h"
#include <stdio.h>

const char *pwd = 
"Genial! Aprendamos a movernos entre carpetas.\n\n"
"Primero, veamos un resumen del sistema de carpetas en Linux.\n\n"
"Aca las carpetas se organizan en una estructura jerárquica que comienza\n"
"desde la raíz, representada por '/'. Esta es la carpeta principal de todo el sistema.\n\n"
"Cuando abres una terminal, por lo general te ubicás automáticamente en la\n"
"carpeta personal de tu usuario. Si quieres saber exactamente en qué carpeta\n"
"estás, puedes usar el comando pwd, que significa print working directory.\n\n"
"Intentalo tu ahora, escribe 'pwd' y presiona la tecla enter\n\n";

void change_dir(int *slc) 
{
	char cmd[255];
	char *ban[4] = { "shutdown", "reboot", "rm", "cd" };
	char *ok[1] = { "pwd" };

	cls_term();
	cls_buf();

	printf("%s", pwd);

	while(playground(cmd, ban, 4, ok, 1) != 0)
		; // wait until the user entries a valid command
}
