#include "main.h"
/**
 * _strncat - concatanate two strings but add
 * inputted number of bytes
 * @src - string to be completed
 * @dest - string to be appended
 * @n - interger parameter
 *
 * Return: return concatanated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index])
	{
		dest_len++;
	}


	for (index = 0 ; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}

	return (dest);
}
