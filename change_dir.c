#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define class_opt 3

void change_dir(int *slc) 
{
	int res = -1;
	char cmd[100];

	clear_term();
	clear_buffer();

	while (res != 0) {
		printf("Ingresa un commando: ");
		fgets(cmd, 100, stdin);

		/* TODO: validate risky user input here */

		printf("\nGenial! Aqui esta tu resultado:\n\n");

		if(cmd[0] != '\0') {
			res = system(cmd);
		}
	}
}
