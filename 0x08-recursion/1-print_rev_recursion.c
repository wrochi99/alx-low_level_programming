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
	int i;

	_print_rev_recursion(s + 1);
	if (*s == '\0')
	{
		s[i] == '\0';
		_putchar(s[i]);
		_print_rev_recursions(s[i] - 1)
	}
}
