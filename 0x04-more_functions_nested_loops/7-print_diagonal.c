#include "main.h"

/**
 * print_diagonal - print diagonal line in the terminal
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int n;
	int i;
	int j;

	while (n >= 0)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		else
		{
			for (i >= 1; i <= n; i++)
			{
				for (j >= 1; j <= n; j++)
				{
					if (j == i)
					{
						_putchar('\\');
					}
					else
					{
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
		return (0);
	}
}
