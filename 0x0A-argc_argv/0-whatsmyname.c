#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * what_is_my_name - prints name of the program
 * followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if successful
 */
int what_is_my_name(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	
	return (0);
}
