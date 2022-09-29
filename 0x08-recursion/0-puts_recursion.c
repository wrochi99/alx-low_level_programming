#include "main.h"

/**
 * _puts_recursion - prints string followed by new line
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
	}
}
