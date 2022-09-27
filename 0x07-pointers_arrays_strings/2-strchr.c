#include "main.h"
/**
 * _strchr - return pointer to 1st 'c' in string 's'
 * or NULL if not found
 * @s: source string
 * @c: character whose pointer is sought
 *
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	int i;
	
	/* 
	 * for every element in the string
	 */
	for (i = 0; *(s + i); s++)
	{
		/* 
		 * check if element is equal to c and
		 * return the address for only 1st c 
		 */
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (0);
}
