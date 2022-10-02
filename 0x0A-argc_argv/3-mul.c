#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print result of (x * y) followed by a new line
 * @argc: argument counter
 * @argv: arg vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, result = 0;
	(void) argv;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		for (i = 1; i <= argc; i++)
		{
			result = (i * (i + 1));
			printf("%d\n", result);
		}
	}
	return (0);
}
