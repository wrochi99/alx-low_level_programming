#include "main.h"

/**
 * _print_rev_recursion - print string string in reverse
 *
 * @s: string to be reversed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{	
	if (*s == '\0')
	{
		_putchar(s);
		_print_rev_recursion(s - 1);
	}
}
