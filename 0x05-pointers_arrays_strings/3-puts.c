#include "main.h"
/**
 * _puts - prints string to stdout
 *
 *  @str - input string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
