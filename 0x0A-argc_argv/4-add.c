#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of (x + y + ....)
 * followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 if successful or 1 else
 */
int main(int argc, char *argv[])
{
	/**
	 * index for argv[]
	 */
	int i, result;
	(void) argv;

	for (i = 1; i < argc; i++)
	{
		if (i >= 1)
		{
			result = result + i;
			printf("%d\n", result);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
