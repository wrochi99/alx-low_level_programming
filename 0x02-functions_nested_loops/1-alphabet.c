#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 * alphabet - random characters
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
