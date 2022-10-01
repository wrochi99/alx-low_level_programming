#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * multiply_two_num - print result of (x * y) 
 * followed by a new line
 * @x: source int from argv[1]
 * @y: source int from argv[2]
 * @argc: argument counter
 *
 * Result: 0 if successful 
 * 	   1 if error
 */
int multiply_two_num(int argc)
{
	int i, result = 0;

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
