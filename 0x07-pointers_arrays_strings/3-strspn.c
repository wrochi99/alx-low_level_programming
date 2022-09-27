#include "main.h"
/**
 * _strspn - return number of bytes of s which
 * consists only of bytes from accept
 * @s: source string
 * @accept: searching string
 *
 * Return: new string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for(j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (s[j] == accept[i])
			{
				break;
			}
		}
		if (!accept[i])
		{
			break;
		}
		return (j);
	}
	return (j);
}
