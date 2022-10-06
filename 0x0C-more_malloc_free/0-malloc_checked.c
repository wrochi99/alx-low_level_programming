#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc,
 * returns pointer to allocated memory,
 * cause normal process termination, if malloc fails, with value of 98
 * @b: int
 *
 * Return: pointer to array or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *m;
	
	m  = (malloc(sizeof(int) * b));
	if (m == 0)
	{
		exit(98);
	}

	return (m);
}
