/* Include main.h header file */
#include "main.h"

/**
 * main - printing _putchar
 * _putchar - random characters
 *
 * Return: 0
 */
int main(void)
{	
	char c;

	for (c = '_'; c <= 'z';)
	{
		_putchar("_");
		_putchar("p");
		_putchar("u");
		_putchar("t");
		_putchar("c");
		_putchar("h");
		_putchar("a");
		_putchar("r");
	}
	_putchar("\n");
	return (0);
}
