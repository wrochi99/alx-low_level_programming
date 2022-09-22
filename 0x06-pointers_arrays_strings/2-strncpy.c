#include "main.h"
/**
 * _strncpy - Copies a string
 * If less than max byte number rem is 
 * filled with null bytes
 * @dest - buffer before string storage
 * @src - string source
 *
 * Return: returns
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
