/* include libraries */

#include <stdio.h>

/**
 * main - print alphabet in lowercase and then uppercase
 * alphabet: random character
 *
 * Return: 0
 */
int main(void)
{
	/* declare var_names for lowercase and uppercase letters */
	char lwrCase;
	char upprCase;
	/* for loop for lwrCase */
	for (lwrCase = 'a'; lwrCase <= 'z'; lwrCase++)
	{
		putchar(lwrCase);
	}
	/* for loop for upprCase */
	for (upprCase = 'A'; upprCase <= 'Z'; upprCase++)
	{
		putchar(upprCase);
	}
	putchar('\n');
	return (0);
}
