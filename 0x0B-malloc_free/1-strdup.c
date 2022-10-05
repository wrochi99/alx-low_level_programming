#include "main.h"

/**
 * _strdup - return pointer to newly allocated memory
 * space that contains a copy of the string given 
 * as a parameter
 * @str: string to be copied
 *
 * Return: NULL if error or pointer if succesful
 */
char *_strdup(char *str)
{
	char *cpy;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		cpy[i] = str[i];
	}

	cpy[len] = '\0';

	return (cpy);
}
