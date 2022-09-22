#include "main.h"
/**
 * _strcat - concatanate string pointed by @src
 * to end of string pointed by @dest
 * @src - string to be concatanated
 * @dest - string to be appended
 *
 * Return: return pointer to guest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;
	
	while(dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}

	return(dest);
}
