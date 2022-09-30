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
int only_positive_sum(int argc, char *argv[])
{
	/**
	 * index for argv[]
	 */	
	int i, result;

	if (argc > 0)
	{
		if (argv[i] < 0 && i != int)
		{
			printf("Error\n");
			return (1);
		}
		else if (argv[i] >= 1)
		{
			for (i = 1; i < argc; i++)
			{
				result += argv[i];
				printf("%d\n", result);
			}
		}
	}
	return (0);
}
