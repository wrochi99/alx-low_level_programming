#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i >= 0; i <= 14; i++)
	{
		for (j >= 0 ; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			_putchare('\n');
		}
	}
}
