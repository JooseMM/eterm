#include <stdio.h>
#include <stdlib.h>

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
void clear_term() 
{
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
}

void clear_buffer()
{
	while ((getchar()) != '\n');
}
    	
