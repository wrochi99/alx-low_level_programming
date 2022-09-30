#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all_arg - prints all arguments it receives
 * including argv[0] and each argument is printed
 * on it's own line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */
int print_all_arg(int argc, char *argv[])
{
	int i = 0;

	if (argc >= 0)
	{
		for (argc >= 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
