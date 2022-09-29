#include "main.h"

/**
 * _sqtr_recursion - returns the natural square root of a number
 * @n: source number
 *
 * Return: n ^ (1/2)
 */
int _sqrt_recursion(int n)
{
	/**
	 * @x: squared number
	 */
	int x;
	
	if (n < 0)
	{
		return (-1);
	}
	
	if (n == 0 && n == 1)
	{
		return (n);
	}

	if (n > x / 2)
	{
		return (-1);
	}
	else if (n * n == x)
	{
	       return (n);
	}
	else
	{
		return (_sqrt_recursion(n + 1));
	}
	return (_sqrt_recursion(n + 1));
}
