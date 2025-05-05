#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>

/* print options */
void select_options(const char **opt, int opt_size, int *slc) 
{
	int i;

	printf("\nOpciones:\n");
	printf("\n");

	for(i = 0; i < opt_size; i++) {
		printf("\033[40m%d. \033[32m%s\033[0m\n", i + 1, opt[i]);
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

int regex(char *cmd, char **ban, int len)
{
	regex_t reg;
	int res = 1;

	/* remove new line */
	cmd[strcspn(cmd, "\n")]= '\0';

	for(int i=0;i<len;i++) {
		/* create regex */
		regcomp(&reg, ban[i], 0);
		/* execute regex */
		if(regexec(&reg, cmd, 0, NULL, 0) == 0) {
			res = 0;
		}
	}

	return res;
}

int playground(
	char *cmd,
	char **ban_cmd,
	int ban_len,
	char **ok_cmd, 
	int ok_len
) 
{
	int res = -1;
	char err[] = 
		"\nUps! No escribiste el commando correcto, vuelve a intentarlo\n\n";

	while (res != 0) {
		if(res>=1)
			printf("%s", err);

		printf("$ ");
		fgets(cmd, 100, stdin);

		/* remove new line */
		cmd[strcspn(cmd, "\n")]= '\0';

		int bad = regex(cmd, ban_cmd, ban_len);
		int ok = regex(cmd, ok_cmd, ok_len);

		if(bad == 0 || ok != 0) {
			printf("%s", err);
			continue;
		}

		printf("\n");
		res = system(cmd);

		if(res != 0)
			printf("%s", err);
	}
	return res;
}
