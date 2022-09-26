#include "main.h"
/**
 * __strstr - find the 1st occurrence of the substring needle in 
 * the string haystack. The terminating null bytes (\0) 
 * are not compared
 * @haystack - str to be examined
 * @needle - sought in haystack
 *
 * Return: return 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2;

	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;

		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
		{
			return (str1);
			haystack = (str1 + 1);
		}
	}
	return (0);
}
