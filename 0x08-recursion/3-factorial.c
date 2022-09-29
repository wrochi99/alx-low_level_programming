#include "main.h"

/**
 * factorial - return factorial of a given number
 * @n: given number (int)
 *
 * Return: factorial if successful or -1 if error
 */
int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	if (n >= 1)
	{
		return ((n * (factorial(n - 1) * -1)));
	}
	return ((n * (factorial(n - 1) * -1)));
}
