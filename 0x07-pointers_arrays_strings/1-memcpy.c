#include "main.h"
/**
 * _memcpy - copy n bytes from src to dest
 * @dest - memory area to receive copy
 * @src - memory area to be copied
 * @n - unsigned int
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
