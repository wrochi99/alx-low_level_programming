#include "main.h"

/**
 * largest number - returns largest of 3 numbers
 * @a - first int
 * @b - second int
 * @c - final int
 *
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
