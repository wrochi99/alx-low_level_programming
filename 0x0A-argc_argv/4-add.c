#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * only_positive_sum - prints result of (x + y + ....)
 * followed by a new line
 * @argc: argument counter
 * @argv: argument vector
 * 
 * Return: 0 if successful
 * 	   1 if error
 */
int only_positive_sum(int argc)
{
	/**
	 * index for argv[]
	 */	
	int i, result;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			if (i < 0)
			{
				printf("Error\n");
				return (1);
			}
			else if (i >= 1)
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
	}
	return (0);
}
