#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

#define class_opt 3

void change_dir(int *slc) 
{
	int res = -1;
	char cmd[100];
	char *ban[3] = { "shutdown", "reboot", "rm" };

	cls_term();
	cls_buf();

	while (res != 0) {
		printf("Ingresa un commando: ");
		fgets(cmd, 100, stdin);

		/* remove new line */
		cmd[strcspn(cmd, "\n")]= '\0';

		int sfe = safe_cmd(cmd, ban, 3);

		if(cmd[0] != '\0' && sfe == 0) {
			printf("\nGenial! Aqui esta tu resultado:\n\n");
			res = system(cmd);
		}
		else {
			printf("\nUps! No escribiste el commando correcto, vuelve a intentarlo\n\n");
		}
	}
}
