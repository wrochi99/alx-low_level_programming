#include "main.h"

/**
 * print_line - print straight line in terminal
 *
 * Return:0
 */
void print_line(int n)
{
	int n;
	int i;

	while (n >= 0)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		else
		{
			for (i > 1; i <= n; i++)
			{
				_putchar('_');
				_putchar('\n');
			}
		}
	}
	return (0);
}
