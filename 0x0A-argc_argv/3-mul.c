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
	int x, y, result;
	(void) argv;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		result = (x * y);
		printf("%d\n", result);
	}
	return (0);
}
