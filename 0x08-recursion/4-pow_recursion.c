#include "main.h"

/**
 * _pow_recursion - return x raised to power of y
 * @x - unsigned int
 * @y - unsigned int
 *
 * Return: result if successful or -1 if error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	
	if (y == 0)
	{
		return (x);
	}
	
	while (y > 0)
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
