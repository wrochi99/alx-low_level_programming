#include "main.h"
/**
 * _strchr - return pointer to 1st 'c' in string 's'
 * or NULL if not found
 * @s - source string
 * @c - character whose pointer is sought
 *
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	while (s != '\0')
	{
		if (s == c)
		{
			return (s);
		}
		s++;
	}
	
	if (*s == c)
	{
		return (s);
	}
	
	return (0);
}
