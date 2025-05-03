#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>

/* array of functions type */
typedef void (*fun_array)(int *);

/* print options */
void select_options(const char **opt, int opt_size, int *slc) 
{
	int i;

	printf("\nOpciones:\n");
	printf("\n");

	for(i = 0; i < opt_size; i++) {
		printf("%d. %s\n", i + 1, opt[i]);
	}

	printf("\nIngresa el numero de la opcion deseada: ");

	*slc = fgetc(stdin);


	return;
}

/* Cleans the current terminal */
void cls_term() 
{
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
}

void cls_buf()
{
	while ((getchar()) != '\n');
}

int safe_cmd(char *cmd, char *ban[2], int len)
{
	regex_t reg;
	int res;

	/* remove new line */
	cmd[strcspn(cmd, "\n")]= '\0';

	for(int i=0;i<len;i++) {
		/* create regex */
		res = regcomp(&reg, ban[i], 0);
		/* execute regex */
		res = regexec(&reg, cmd, 0, NULL, 0);

		if(res == 0)
			return 1;
	}

	return 0;
}
