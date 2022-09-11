/* include libraries */
#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse
 * alphabet: random character
 *
 * Return: 0
 */
int main(void)
{
	/* declar var_name and type */
	char reverseAlphabet;
	/* for loop */
	for (reverseAlphabet = 'z'; reverseAlphabet >= 'a'; reverseAlphabet--)
	{
		putchar(reverseAlphabet);
	}
	putchar('\n');
	return (0);
}
