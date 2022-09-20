#include "main.h"
/**
 * swap_int - swaps the values of two ints '*a' and '*b'
 * a - random int
 * b - random int
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
