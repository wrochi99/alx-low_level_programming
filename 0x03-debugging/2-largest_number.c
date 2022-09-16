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

	if (a > b)
	{
		if (a > c)
		{
			largest = a;
		}
	}
	else if (b > c)
	{
		if (b > a)
		{
			largest = b;
		}
	}
	else if (c > a)
	{
		if (c > b)
		{
		largest = c;
		}
	}
	return (largest);
}
