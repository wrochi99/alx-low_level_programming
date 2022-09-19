#include "main.h"
/**
 * _strcpy - copy string to buffer pointed by dest
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	char copy;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (copy);
}
