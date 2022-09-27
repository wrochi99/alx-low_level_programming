#include "main.h"
/**
 * _memset - fill memory with constant byte
 *  @s: character to be pointed
 *  @b: constant byte
 *  @n: unsigned int
 *
 * Return: pointer to memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
