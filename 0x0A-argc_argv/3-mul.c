#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * multiply_two_num - print result of (x * y) 
 * followed by a new line
 * @x: source int from argv[1]
 * @y: source int from argv[2]
 * @argc: argument counter
 * @argv: argument vector
 *
 * Result: 0 if successful 
 * 	   1 if error
 */
int multiply_two_num(int argc, char *argv[])
{
	int x, y, result;

	argv[1] = x;
	argv[2] = y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		result = (x * y);
		printf("%d\n", result);
	}
	return (0);
}
