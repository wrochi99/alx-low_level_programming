#include "main.h"

/**
 * is_prime_number - returns 1 if input number is prime
 *
 * @n: source number
 *
 * Return: 1 if prime or 0 if not
 */
int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}

	if (n == 2 || n == 3)
	{
		return (1);
	}

	if ((n % 2) != 0 || (n % 3) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
