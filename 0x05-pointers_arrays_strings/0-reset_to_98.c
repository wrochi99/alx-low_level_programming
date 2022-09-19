#include "main.h"

/**
 * reset_to_98 - takes a pointer to any int and...
 * updates it's value to 98.
 * int - random interger
 *
 * Return: 0
 */
void reset_to_98(int *n)
{
	int i;

	i = 5;
	n = &i;

	*n = 98;
}
