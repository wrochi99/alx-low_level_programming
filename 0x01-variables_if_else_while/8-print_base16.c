/* include libraries */
#include <stdio.h>
/**
 * main - print numbers of base 16 in lowercase
 * numbers: random interger
 *
 * Return: 0
 */
int main(void)
{
	/* declare var_name */
	char base16;
	/* for loop */
	for (base16 = '0'; base16 <= '9'; base16++)
	{
		putchar(base16);
	}
	for (base16 = 'a'; base16 <= 'f'; base16++)
	{
		putchar(base16);
	}
	putchar('\n');
	return (0);
}
