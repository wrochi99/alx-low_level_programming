#include "main.h"
/**
 * __strstr - find the 1st occurrence of the substring needle in 
 * the string haystack. The terminating null bytes (\0) 
 * are not compared
 * @haystack: str to be examined
 * @needle: sought in haystack
 *
 * Return: return 0
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	i = 0;
	j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
			{
				j++;
			}
			else
			{
			break;
			}
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
		{
		return (haystack + i);
		}
	}
	return (0);
}
