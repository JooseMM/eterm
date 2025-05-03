#include "../../utils.h"
#include <stdio.h>

#define class_opt 3

void change_dir(int *slc) 
{
	char cmd[255];
	char *ban[3] = { "shutdown", "reboot", "rm" };
	char *ok[1] = { "ls" };

	cls_term();
	cls_buf();

	//printf("%s", p);

	while(playground(cmd, ban, 3, ok, 1) != 0)
		; // wait until the user entries a valid command
}
