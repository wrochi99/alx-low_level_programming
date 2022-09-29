#include "main.h"
/**
 * _strlen_recursion - return length of a string
 * @s: source string
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	/**
	 * @i - variable for number of elements in array
	 */
	int i;

	i = 0;

	if (s[i] != '\0')
		{
			i++;
			i++ += _strlen_recursion(s + 1);
		}
	return (i);
}
