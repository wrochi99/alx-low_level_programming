#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_num_arg - print number of arguments 
 * followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 successful
 */
int print_num_arg(int argc, char* argv[])
{
	int i, num = 0;

	if (argc > 0)
	{
		for (argc > 0; i < argc; i++)
		{
			num = num + (i, argv[i]);
			printf("%d\n", num);
		}
	}
	return (0);
}
