#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments
 * followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 successful
 */
int main(int argc, char *argv[])
{
	int i, num = 0;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			num += atoi(argv[i]);
			printf("%d\n", num);
		}
	}
	return (0);
}
