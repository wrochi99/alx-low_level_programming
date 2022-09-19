#include "main.h"
/**
 * puts_half - print second half of string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i;
	int n;
	int len;

	for (len = 0; str[len] != 0; len++)
	{
	}
	n = (len - 1) / 2;
	for (i = n + 1; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
