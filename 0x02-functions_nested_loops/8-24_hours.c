#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 
 * 00:00hrs to 23:59hrs
 *
 * Return:0
 */
void jack_bauer(void)
{
	int i;
	int j;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		i++;
	}
}
