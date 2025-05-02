#include "utils.h"
#include <stdio.h>

#define class_opt 3

extern void change_dir(int *slc);

int main() {
	int slc;
	/* an array of function pointers */
	fun_ptr func[class_opt];

	func[CHANGE_DIR] = change_dir;

	const char *opt[class_opt] = {
		"Moverse entre carpetas",
		"Editar archivos de texto",
		"Instalacion de programas externos",
	};

	cls_term();
	printf("Hola! Iniciando tu practica de linea de comandos.\n");
	printf("Aqui aprenderas los comandos esenciales para controlar tu computadora solo con la terminal!.\n");
  	printf("\nQue quieres practicar hoy?\n");
	select_options(opt, class_opt, &slc);

	/* fix offset for accurate array index */
	int temp = (slc - '0') - 1;

	if(temp < class_opt && temp >= 0) 
		func[temp](&slc);

	printf("\nTerminaste el programa! Nos vemos\n");

  	return 0;
}
