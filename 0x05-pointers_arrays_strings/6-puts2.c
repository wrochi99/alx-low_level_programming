#include "main.h"
/**
 * puts2 - prints every other char
 *
 * Return:0
 */
void puts2(char *str)
{
	int i;

	for  (str[i] != '\0')
	{
		while (i % 2 == 0)
		{
			_putchar(str);
		}
		i++;
	}
	_putchar('\n');
	return (0);
}
