#include "main.h"

/**
 * print_square - print square in the terminal
 *
 * Return: 0
 */
void print_square(int size)
{
	int size;
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (i >= 1; i <= size; i++)
		{
			for (j >= 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	return (0);
}
